//---------------------------------------------------------------------------
#pragma hdrstop
#include "var.h"
#include "Setting_Items.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "sEdit"
#pragma link "sGroupBox"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TSetting_Items_Form *Setting_Items_Form;
//---------------------------------------------------------------------------
__fastcall TSetting_Items_Form::TSetting_Items_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Items_Form::Setting_Menu_Btn_ExitClick(TObject *Sender)
{
	Main_Form->Timer->Enabled = true;
 	this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Items_Form::Setting_Menu_UserClick(TObject *Sender)
{
	Setting_User_Form->Show();
	this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Items_Form::Setting_Menu_SettlementClick(TObject *Sender)

{
	Show_Settlement_Form->Show();
	this->Close();
}
//---------------------------------------------------------------------------



void __fastcall TSetting_Items_Form::Setting_Items_Btn_CancelModifyClick(TObject *Sender)

{
	Main_Form->Items_ClientDataSet->Active = false;
	Main_Form->Items_ClientDataSet->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Items_Form::Setting_Items_UpdateClick(TObject *Sender)
{
	Main_Form->Items_ClientDataSet->ApplyUpdates(0);
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Items_Form::Setting_Items_Search_BtnClick(TObject *Sender)

{
	String s;
	s = Setting_Items_Search_Edit->Text;
	s = ((AnsiString)Setting_Items_Search_Edit->Text).c_str();

	Query_Items("select * from db_project.op_product where PD_NAME like \'\%", s, "\%\'");
}
//---------------------------------------------------------------------------


void __fastcall TSetting_Items_Form::FormShow(TObject *Sender)
{
	Query_Items("select * from db_project.op_product where PD_NAME like \'\%", "", "\%\'");
	Setting_Items_DBGrid->DataSource = Main_Form->Items_DataSource;
	Setting_Items_DBNavigator->DataSource =  Main_Form->Items_DataSource;
}
//---------------------------------------------------------------------------

