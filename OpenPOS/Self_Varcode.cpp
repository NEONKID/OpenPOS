//---------------------------------------------------------------------------
#pragma hdrstop
#include "var.h"
#include "Self_Varcode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "iComponent"
#pragma link "iCustomComponent"
#pragma link "iKeyBoard"
#pragma link "iVCLComponent"
#pragma link "AdvTouchKeyboard"
#pragma resource "*.dfm"
TSelf_Varcode_Form *Self_Varcode_Form;
//---------------------------------------------------------------------------
__fastcall TSelf_Varcode_Form::TSelf_Varcode_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSelf_Varcode_Form::Self_Varcode_Btn_CencelClick(TObject *Sender)
{
	Main_Form->Enabled = true;
	Main_Form->Timer->Enabled = true;
	this->Close();
}
//---------------------------------------------------------------------------


void __fastcall TSelf_Varcode_Form::FormShow(TObject *Sender)
{
	TouchKeyboard->Height = 660;
	TouchKeyboard->Width = 330;
	Self_Varcode_Edit->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TSelf_Varcode_Form::Self_Varcode_Btn_EnterClick(TObject *Sender)
{
	Control.varcode = Self_Varcode_Edit->Text.ToInt();
	Control.varcode_flag = true;
	Main_Form->Enabled = true;
	Main_Form->Timer->Enabled = true;
	this->Close();
}
//---------------------------------------------------------------------------

