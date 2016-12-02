//---------------------------------------------------------------------------
#pragma hdrstop

#include "var.h"
#include "Refund.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "sBitBtn"
#pragma resource "*.dfm"
TRefund_Form *Refund_Form;
//---------------------------------------------------------------------------
__fastcall TRefund_Form::TRefund_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRefund_Form::Refund_Exit_BtnClick(TObject *Sender)
{
	Main_Form->Sale_ClientDataSet->ApplyUpdates(-1);
	Main_Form->Enabled = true;
	Main_Form->Timer->Enabled = true;
	this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TRefund_Form::FormShow(TObject *Sender)
{
	Refund_DBGrid->DataSource = Main_Form->Sale_DataSource;
	Refund_DBNavigator_Cancel->DataSource = Main_Form->Sale_DataSource;
	Refund_DBNavigator_Refund->DataSource = Main_Form->Sale_DataSource;
	Main_Form->Sale_SQLQuery->SQL->Clear();
	Main_Form->Sale_SQLQuery->SQL->Add("SELECT * FROM db_project.op_sale");
	Main_Form->Sale_SQLQuery->ExecSQL(true);
	Main_Form->Sale_ClientDataSet->Refresh();
}
//---------------------------------------------------------------------------


