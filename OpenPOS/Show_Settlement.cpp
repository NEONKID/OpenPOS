//---------------------------------------------------------------------------
#pragma hdrstop

#include "var.h"
#include "Show_Settlement.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TShow_Settlement_Form *Show_Settlement_Form;
//---------------------------------------------------------------------------
__fastcall TShow_Settlement_Form::TShow_Settlement_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TShow_Settlement_Form::Setting_Menu_Btn_ExitClick(TObject *Sender)
{
	Main_Form->Timer->Enabled = true;
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TShow_Settlement_Form::Setting_Menu_ItemsClick(TObject *Sender)
{
	Setting_Items_Form->Show();
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TShow_Settlement_Form::Setting_Menu_UserClick(TObject *Sender)
{
	Setting_User_Form->Show();
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TShow_Settlement_Form::FormShow(TObject *Sender)
{
	Main_Form->Result_SQLQuery->SQL->Clear();
	Main_Form->Result_SQLQuery->SQL->Add("SELECT * FROM db_project.op_result");
	Main_Form->Result_SQLQuery->ExecSQL(true);
	Main_Form->Result_ClientDataSet->Active = false;
    Main_Form->Result_ClientDataSet->Active = true;

	Show_Settlement_DBGrid->DataSource = Main_Form->Result_DataSource;
}
//---------------------------------------------------------------------------

