//---------------------------------------------------------------------------

#ifndef LoginH
#define LoginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Touch.Keyboard.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TLogin_Form : public TForm
{
__published:	// IDE-managed Components
	TsPanel *Login_Form_Panel;
	TsLabel *Login_Label;
	TsEdit *Login_ID_Edit;
	TsEdit *Login_Password_Edit;
	TsBitBtn *Login_Btn_Cancel;
	TsBitBtn *Login_Btn_Enter;
	TTouchKeyboard *TouchKeyboard1;
	TsLabelFX *sLabelFX1;
	TsLabel *sLabel1;
	TsLabel *sLabel2;
	void __fastcall Login_Btn_CancelClick(TObject *Sender);
	void __fastcall Login_Btn_EnterClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLogin_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLogin_Form *Login_Form;
//---------------------------------------------------------------------------
#endif
