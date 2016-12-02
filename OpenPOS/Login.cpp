//---------------------------------------------------------------------------
#pragma hdrstop
#include "var.h"
#include "Login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TLogin_Form *Login_Form;
//---------------------------------------------------------------------------
__fastcall TLogin_Form::TLogin_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLogin_Form::Login_Btn_CancelClick(TObject *Sender)
{
	Main_Form->Enabled = true;
	Main_Form->Timer->Enabled = true;
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TLogin_Form::Login_Btn_EnterClick(TObject *Sender)
{
	//로그인 쿼리
	Query_Login(Login_ID_Edit->Text);
	if(strcmp(((AnsiString)Main_Form->Main_DBEdit_Sale_Password->Text).c_str(),((AnsiString)Login_Password_Edit->Text).c_str()) == 0
	&& strcmp(((AnsiString)Main_Form->Main_DBEdit_Sale_ID->Text).c_str(),((AnsiString)Login_ID_Edit->Text).c_str()) == 0)
	{
		Main_Form->Main_Current_User_Label->Caption = Main_Form->Main_DBEdit_Sale_Name->Text;
		Main_Form->Enabled = true;
		Main_Form->Timer->Enabled = true;
		Control.Login_State = true;
		this->Close();
	}else{
		Alert("아이디 or 비밀번호 불일치!!!");
    }
}
//---------------------------------------------------------------------------

void __fastcall TLogin_Form::FormShow(TObject *Sender)
{
	Login_Password_Edit->Text = "";
	Login_ID_Edit->Text = "";
}
//---------------------------------------------------------------------------

