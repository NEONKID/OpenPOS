//---------------------------------------------------------------------------

#ifndef Setting_ItemsH
#define Setting_ItemsH
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
#include <Vcl.Grids.hpp>
#include "sEdit.hpp"
#include "sGroupBox.hpp"
#include "AdvGlassButton.hpp"
#include <Vcl.DBGrids.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TSetting_Items_Form : public TForm
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
	TsPanel *sPanel3;
	TsPanel *sPanel4;
	TsGroupBox *제품검색;
	TsEdit *Setting_Items_Search_Edit;
	TsBitBtn *Setting_Items_Search_Btn;
	TsBitBtn *Setting_Items_Update;
	TDBGrid *Setting_Items_DBGrid;
	TsBitBtn *Setting_Items_Btn_CancelModify;
	TsPanel *sPanel5;
	TDBNavigator *Setting_Items_DBNavigator;
	TsPanel *sPanel6;
	TsLabel *sLabel2;
	void __fastcall Setting_Menu_Btn_ExitClick(TObject *Sender);
	void __fastcall Setting_Menu_UserClick(TObject *Sender);
	void __fastcall Setting_Menu_SettlementClick(TObject *Sender);
	void __fastcall Setting_Items_Btn_CancelModifyClick(TObject *Sender);
	void __fastcall Setting_Items_UpdateClick(TObject *Sender);
	void __fastcall Setting_Items_Search_BtnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSetting_Items_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSetting_Items_Form *Setting_Items_Form;
//---------------------------------------------------------------------------
#endif
