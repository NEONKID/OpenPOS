//---------------------------------------------------------------------------

#ifndef Setting_UserH
#define Setting_UserH
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
#include "sEdit.hpp"
#include "sGroupBox.hpp"
#include <Vcl.Grids.hpp>
#include <Vcl.Touch.Keyboard.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
//---------------------------------------------------------------------------
class TSetting_User_Form : public TForm
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
	TDBGrid *Setting_User_DBGrid;
	TDBNavigator *Setting_User_DBNavigator;
	TTouchKeyboard *TouchKeyboard1;
	void __fastcall Setting_Menu_Btn_ExitClick(TObject *Sender);
	void __fastcall Setting_Menu_ItemsClick(TObject *Sender);
	void __fastcall Setting_Menu_SettlementClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSetting_User_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSetting_User_Form *Setting_User_Form;
//---------------------------------------------------------------------------
#endif
