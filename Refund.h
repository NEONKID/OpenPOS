//---------------------------------------------------------------------------

#ifndef RefundH
#define RefundH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "sBitBtn.hpp"
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TRefund_Form : public TForm
{
__published:	// IDE-managed Components
	TsPanel *sPanel1;
	TsPanel *sPanel2;
	TsLabel *sLabel1;
	TsLabel *sLabel2;
	TsBitBtn *Refund_Exit_Btn;
	TDBGrid *Refund_DBGrid;
	TDBNavigator *Refund_DBNavigator_Refund;
	TDBNavigator *Refund_DBNavigator_Cancel;
	void __fastcall Refund_Exit_BtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRefund_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRefund_Form *Refund_Form;
//---------------------------------------------------------------------------
#endif
