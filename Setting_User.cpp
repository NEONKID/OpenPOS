//---------------------------------------------------------------------------
#pragma hdrstop
#include "var.h"
#include "Setting_User.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "sEdit"
#pragma link "sGroupBox"
#pragma resource "*.dfm"
TSetting_User_Form *Setting_User_Form;
//---------------------------------------------------------------------------
__fastcall TSetting_User_Form::TSetting_User_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSetting_User_Form::Setting_Menu_Btn_ExitClick(TObject *Sender)
{
	Main_Form->Timer->Enabled = true;
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSetting_User_Form::Setting_Menu_ItemsClick(TObject *Sender)
{
	Setting_Items_Form->Show();
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSetting_User_Form::Setting_Menu_SettlementClick(TObject *Sender)

{
	Show_Settlement_Form->Show();
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSetting_User_Form::FormShow(TObject *Sender)
{
	Setting_User_DBGrid->DataSource = Main_Form->User_DataSource;
	Setting_User_DBNavigator->DataSource = Main_Form->User_DataSource;
	Main_Form->User_SQLQuery->SQL->Clear();
	Main_Form->User_SQLQuery->SQL->Add("select * from db_project.op_user");
	Main_Form->User_SQLQuery->ExecSQL(true);
	Main_Form->User_ClientDataSet->Active = false;
	Main_Form->User_ClientDataSet->Active = true;
}

//---------------------------------------------------------------------------



