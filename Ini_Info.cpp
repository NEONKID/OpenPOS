//---------------------------------------------------------------------------
#pragma hdrstop

#include "var.h"
#include "Ini_Info.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sGroupBox"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "acPNG"
#pragma resource "*.dfm"
TIni_Info_Form *Ini_Info_Form;
//---------------------------------------------------------------------------
__fastcall TIni_Info_Form::TIni_Info_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TIni_Info_Form::sBitBtn2Click(TObject *Sender)
{
	Main_Form->Timer->Enabled = true;
 	this->Close();
}
//---------------------------------------------------------------------------
