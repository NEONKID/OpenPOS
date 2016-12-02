//---------------------------------------------------------------------------

#ifndef Ini_InfoH
#define Ini_InfoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include "sGroupBox.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Touch.Keyboard.hpp>
#include "acPNG.hpp"
//---------------------------------------------------------------------------
class TIni_Info_Form : public TForm
{
__published:	// IDE-managed Components
	TsPanel *sPanel1;
	TsGroupBox *sGroupBox1;
	TsPanel *sPanel3;
	TsLabel *sLabel2;
	TsEdit *sEdit1;
	TsBitBtn *sBitBtn1;
	TsPanel *sPanel4;
	TsLabel *sLabel3;
	TsEdit *sEdit2;
	TsPanel *sPanel5;
	TsLabel *sLabel4;
	TsEdit *sEdit3;
	TsPanel *sPanel6;
	TsLabel *sLabel5;
	TsEdit *sEdit5;
	TTouchKeyboard *TouchKeyboard1;
	TsLabel *sLabel1;
	TImage *Image1;
	TsBitBtn *sBitBtn2;
	void __fastcall sBitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TIni_Info_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIni_Info_Form *Ini_Info_Form;
//---------------------------------------------------------------------------
#endif
