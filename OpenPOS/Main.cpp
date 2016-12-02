//---------------------------------------------------------------------------
#pragma hdrstop
#include "var.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sPanel"
#pragma link "sSkinManager"
#pragma link "sBitBtn"
#pragma link "sLabel"
#pragma link "sTrackBar"
#pragma link "sScrollBar"
#pragma link "AdvTouchKeyboard"
#pragma resource "*.dfm"
TMain_Form *Main_Form;

__Control Control;

//---------------------------------------------------------------------------
__fastcall TMain_Form::TMain_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::FormCreate(TObject *Sender)
{
	memset(&Control,0,sizeof(Control));
    Control.cash = true;

	Main_Grid_Items->Cells[0][0] = "            제 품 명";
	Main_Grid_Items->Cells[1][0] = "           제 품 가 격";
	Main_Grid_Items->Cells[2][0] = "           제 품 수 량";
	Main_Grid_Items->Cells[3][0] = "          결 제 금 액";
	Main_Grid_PaymentInfo->Cells[0][0] = "        결 제 금 액";
	Main_Grid_PaymentInfo->Cells[0][1] = "        현        금";
	Main_Grid_PaymentInfo->Cells[0][2] = "        카        드";
	Main_Grid_PaymentInfo->Cells[0][3] = "        거 스 름 돈";

	//for(int i = 0; i < 4; i++)
		//Main_Grid_PaymentInfo->Cells[1][i] = 0;

	Main_TouchKeyboard->Height = 440;
	Main_TouchKeyboard->Width = 330;

	Timer->Enabled = true;
}

//---------------------------------------------------------------------------


void __fastcall TMain_Form::FormShow(TObject *Sender)
{
	if(Control.Login_State == false)
	{
		Timer->Enabled = false;
		Main_Form->Enabled = false;
		Login_Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_exit_btnClick(TObject *Sender)
{
	Timer->Enabled = false;
	this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Btn_Self_BarcodeClick(TObject *Sender)
{
	Timer->Enabled = false;
	Main_Form->Enabled = false;
	Self_Varcode_Form->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TMain_Form::Main_Btn_LoginClick(TObject *Sender)
{
	Timer->Enabled = false;
	Main_Form->Enabled = false;
	Login_Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Btn_SettingClick(TObject *Sender)
{
	if(Main_DBEdit_Sale_Aut->Text.ToInt() == 1)
	{
		Timer->Enabled = false;
		Setting_Items_Form->ShowModal();
	}else{
        Alert("관리자 권한 필요!!!");
    }
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::sBitBtn28Click(TObject *Sender)
{
	//Timer->Enabled = false;
	//Ini_Info_Form->Show();
}
//---------------------------------------------------------------------------


void __fastcall TMain_Form::Main_Btn_RefundClick(TObject *Sender)
{
	Timer->Enabled = false;
	Main_Form->Enabled = false;
	Refund_Form->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::TimerTimer(TObject *Sender)
{
	Timer->Enabled = false;

	if(Control.varcode_flag)
	{
		String s;
		s = ((AnsiString)Control.varcode).c_str();
        Main_Grid_Items->RowCount = Control.main_grid_count+2;
		Query_Items("select * from db_project.op_product where PD_IDX = ", s, ";");

		Main_Grid_Items->Cells[0][Control.main_grid_count+1] = Main_DBEdit_Name->Text;
		Main_Grid_Items->Cells[1][Control.main_grid_count+1] = Main_DBEdit_Price->Text.ToInt();
		Main_Grid_Items->Cells[2][Control.main_grid_count+1] = 1;
		Main_Grid_Items->Cells[3][Control.main_grid_count+1] = Main_DBEdit_Price->Text.ToInt();
		Main_Grid_PaymentInfo->Cells[1][0] = Main_DBEdit_Price->Text.ToInt();

		Control.main_grid_count++;
		Control.varcode = 0;
		Control.varcode_flag = false;
		Control.main_calcul = true;
	}

	for(int i = 0; i < 4; i++)
		if(Main_Grid_PaymentInfo->Cells[1][i] == "")
			Main_Grid_PaymentInfo->Cells[1][i] = "0";

	//changes
	if(Control.main_calcul)
	{
		Main_Grid_PaymentInfo->Cells[1][3] = (Main_Grid_PaymentInfo->Cells[1][1].ToInt())+(Main_Grid_PaymentInfo->Cells[1][2].ToInt())-(Main_Grid_PaymentInfo->Cells[1][0].ToInt());
		Control.main_calcul = false;
	}

	//Time
	lblDate->Caption = Now().CurrentDate().FormatString("yyyy-mm-dd");
	lblTime->Caption = Now().CurrentTime().FormatString(" hh:mm:ss");

	//Login State Check
	if(Control.Login_State == false)
		this->Close();

	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Add_Amonut_BtnClick(TObject *Sender)
{
	Timer->Enabled = false;
	int temp = Main_Grid_Items->Cells[2][Control.main_item_grid_y].ToInt();
	temp++;
	Main_Grid_Items->Cells[3][Control.main_item_grid_y] = ((AnsiString)((Main_Grid_Items->Cells[1][Control.main_item_grid_y].ToInt())*temp)).c_str();
	Main_Grid_Items->Cells[2][Control.main_item_grid_y] = ((AnsiString)temp).c_str();
	Main_Grid_PaymentInfo->Cells[1][0] = Main_Grid_Items->Cells[3][Control.main_item_grid_y];
	Control.main_calcul = true;
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Grid_ItemsSelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	Timer->Enabled = false;
	Control.main_item_grid_y = ARow;
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Sub_Amonut_BtnClick(TObject *Sender)
{
	Timer->Enabled = false;

	int temp = Main_Grid_Items->Cells[2][Control.main_item_grid_y].ToInt();
	temp--;
	Main_Grid_Items->Cells[3][Control.main_item_grid_y] = ((AnsiString)((Main_Grid_Items->Cells[1][Control.main_item_grid_y].ToInt())*temp)).c_str();
	Main_Grid_Items->Cells[2][Control.main_item_grid_y] = ((AnsiString)temp).c_str();
	Main_Grid_PaymentInfo->Cells[1][0] = Main_Grid_Items->Cells[3][Control.main_item_grid_y];
	Control.main_calcul = true;

	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Grid_Cancel_BtnClick(TObject *Sender)
{
	Timer->Enabled = false;

	if(Main_Grid_Items->RowCount > 1)
	{
		Main_Grid_Items->RowCount--;
		Control.main_grid_count--;
	}
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Cash_BtnClick(TObject *Sender)
{
	Timer->Enabled = false;
	Control.cash = true;
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_Card_BtnClick(TObject *Sender)
{
	Timer->Enabled = false;
	Control.cash = false;
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_TouchKeyboardKeyClick(TObject *Sender, int Index)
{
	Timer->Enabled = false;
//Index 0~9:0~9, 10:del, 11:00
	if(Control.cash)
	{
		if(Index == 10)
		{
			Main_Grid_PaymentInfo->Cells[1][1] = Main_Grid_PaymentInfo->Cells[1][1].SubString(0,Main_Grid_PaymentInfo->Cells[1][1].Length()-1);
		}else if(Index == 11)
		{
			Main_Grid_PaymentInfo->Cells[1][1] = ((AnsiString)Main_Grid_PaymentInfo->Cells[1][1].ToInt()+0).c_str();
			Main_Grid_PaymentInfo->Cells[1][1] = ((AnsiString)Main_Grid_PaymentInfo->Cells[1][1].ToInt()+0).c_str();
		}else{
			Main_Grid_PaymentInfo->Cells[1][1] = ((AnsiString)Main_Grid_PaymentInfo->Cells[1][1].ToInt()+Index).c_str();
		}
	}else{
     	if(Index == 10)
		{
			Main_Grid_PaymentInfo->Cells[1][2] = Main_Grid_PaymentInfo->Cells[1][2].SubString(0,Main_Grid_PaymentInfo->Cells[1][2].Length()-1);
		}else if(Index == 11)
		{
			Main_Grid_PaymentInfo->Cells[1][2] = ((AnsiString)Main_Grid_PaymentInfo->Cells[1][2].ToInt()+0).c_str();
			Main_Grid_PaymentInfo->Cells[1][2] = ((AnsiString)Main_Grid_PaymentInfo->Cells[1][2].ToInt()+0).c_str();
		}else{
			Main_Grid_PaymentInfo->Cells[1][2] = ((AnsiString)Main_Grid_PaymentInfo->Cells[1][2].ToInt()+Index).c_str();
		}
	}

	Control.main_calcul = true;
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::Main_payment_btnClick(TObject *Sender)
{
	Timer->Enabled = false;

	if(Main_Grid_PaymentInfo->Cells[1][0] != 0)
	{
		for(int i = 0; i < Control.main_grid_count; i++)//sale 테이블에 추가.
		{
			Query_Sale(Main_DBEdit_Sale_ID->Text, Main_Grid_Items->Cells[0][i+1], Main_Grid_Items->Cells[1][i+1], lblDate->Caption, lblTime->Caption, Main_Grid_Items->Cells[2][i+1]);
			Query_Item_Update_Qua(Main_Grid_Items->Cells[0][i+1],  Main_Grid_Items->Cells[2][i+1]);
			Query_Result_Update(lblDate->Caption, lblTime->Caption, Main_DBEdit_Sale_ID->Text, Main_Grid_PaymentInfo->Cells[1][1], Main_Grid_PaymentInfo->Cells[1][2], Main_Grid_PaymentInfo->Cells[1][0]);
		}
		for(int i = 0; i < 4; i++)
			Main_Grid_PaymentInfo->Cells[1][i] = 0;

		Main_Grid_Items->RowCount = 1;
		Control.main_grid_count = 0;
	}
	Timer->Enabled = true;
}
//---------------------------------------------------------------------------


