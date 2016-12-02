//---------------------------------------------------------------------------

#ifndef Show_SettlementH
#define Show_SettlementH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "sBitBtn.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TShow_Settlement_Form : public TForm
{
__published:	// IDE-managed Components
	TsPanel *sPanel1;
	TsPanel *sPanel13;
	TsLabelFX *sLabelFX1;
	TsLabelFX *sLabelFX2;
	TsPanel *sPanel14;
	TsLabel *sLabel1;
	TsBitBtn *Setting_Menu_Btn_Exit;
	TsBitBtn *Setting_Menu_Settlement;
	TsBitBtn *Setting_Menu_User;
	TsBitBtn *Setting_Menu_Items;
	TsPanel *sPanel2;
	TDBGrid *Show_Settlement_DBGrid;
	void __fastcall Setting_Menu_Btn_ExitClick(TObject *Sender);
	void __fastcall Setting_Menu_ItemsClick(TObject *Sender);
	void __fastcall Setting_Menu_UserClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TShow_Settlement_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShow_Settlement_Form *Show_Settlement_Form;
//---------------------------------------------------------------------------
#endif
