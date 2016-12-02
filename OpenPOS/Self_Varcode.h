//---------------------------------------------------------------------------

#ifndef Self_VarcodeH
#define Self_VarcodeH
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
#include "iComponent.hpp"
#include "iCustomComponent.hpp"
#include "iKeyBoard.hpp"
#include "iVCLComponent.hpp"
#include "AdvTouchKeyboard.hpp"
//---------------------------------------------------------------------------
class TSelf_Varcode_Form : public TForm
{
__published:	// IDE-managed Components
	TsEdit *Self_Varcode_Edit;
	TsLabel *sLabel1;
	TsPanel *sPanel1;
	TsBitBtn *Self_Varcode_Btn_Enter;
	TsBitBtn *Self_Varcode_Btn_Cencel;
	TAdvTouchKeyboard *TouchKeyboard;
	void __fastcall Self_Varcode_Btn_CencelClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Self_Varcode_Btn_EnterClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TSelf_Varcode_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSelf_Varcode_Form *Self_Varcode_Form;
//---------------------------------------------------------------------------
#endif
