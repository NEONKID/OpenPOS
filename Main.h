//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "sPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "sSkinManager.hpp"
#include "sBitBtn.hpp"
#include <Vcl.Buttons.hpp>
#include "sLabel.hpp"
#include <Vcl.Grids.hpp>
#include "sTrackBar.hpp"
#include <Vcl.ComCtrls.hpp>
#include "sScrollBar.hpp"
#include <Data.DB.hpp>
#include <Data.DBXMySQL.hpp>
#include <Data.SqlExpr.hpp>
#include "AdvTouchKeyboard.hpp"
#include <Data.FMTBcd.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TMain_Form : public TForm
{
__published:	// IDE-managed Components
	TsPanel *sPanel2;
	TsPanel *sPanel1;
	TsSkinManager *Skin;
	TsPanel *sPanel6;
	TsPanel *sPanel7;
	TsBitBtn *Main_exit_btn;
	TsBitBtn *Main_Btn_Setting;
	TStringGrid *Main_Grid_Items;
	TsPanel *sPanel13;
	TsLabelFX *sLabelFX1;
	TsBitBtn *Main_Btn_Login;
	TsLabelFX *sLabelFX2;
	TsPanel *sPanel14;
	TsLabelFX *lblDate;
	TsLabelFX *lblTime;
	TsLabel *Main_Current_User_Label;
	TsPanel *sPanel9;
	TStringGrid *Main_Grid_PaymentInfo;
	TsPanel *sPanel4;
	TsPanel *sPanel8;
	TsBitBtn *sBitBtn21;
	TsBitBtn *sBitBtn22;
	TsPanel *sPanel17;
	TsBitBtn *sBitBtn24;
	TsBitBtn *sBitBtn25;
	TsPanel *sPanel18;
	TsBitBtn *sBitBtn27;
	TsBitBtn *sBitBtn28;
	TsPanel *sPanel19;
	TsBitBtn *Main_Btn_Refund;
	TsBitBtn *Main_Btn_Self_Barcode;
	TsPanel *sPanel20;
	TsBitBtn *Main_payment_btn;
	TsPanel *sPanel5;
	TsBitBtn *Main_Add_Amonut_Btn;
	TsBitBtn *Main_Sub_Amonut_Btn;
	TsBitBtn *Main_Grid_Cancel_Btn;
	TsPanel *sPanel21;
	TsBitBtn *Main_Cash_Btn;
	TsBitBtn *Main_Card_Btn;
	TAdvTouchKeyboard *Main_TouchKeyboard;
	TSQLConnection *Main_SQLConnection;
	TSQLQuery *Items_SQLQuery;
	TDataSetProvider *Items_DataSetProvider;
	TClientDataSet *Items_ClientDataSet;
	TDataSource *Items_DataSource;
	TClientDataSet *User_ClientDataSet;
	TDataSetProvider *User_DataSetProvider;
	TDataSource *User_DataSource;
	TSQLQuery *Sale_SQLQuery;
	TSQLQuery *Result_SQLQuery;
	TDataSetProvider *Sale_DataSetProvider;
	TDataSetProvider *Result_DataSetProvider;
	TClientDataSet *Sale_ClientDataSet;
	TClientDataSet *Result_ClientDataSet;
	TDataSource *Sale_DataSource;
	TDataSource *Result_DataSource;
	TIntegerField *Items_ClientDataSetPD_IDX;
	TWideStringField *Items_ClientDataSetPD_NAME;
	TWideStringField *Items_ClientDataSetPD_PRICE;
	TIntegerField *Items_ClientDataSetPD_COUNT;
	TIntegerField *Items_SQLQueryPD_IDX;
	TWideStringField *Items_SQLQueryPD_NAME;
	TWideStringField *Items_SQLQueryPD_PRICE;
	TIntegerField *Items_SQLQueryPD_COUNT;
	TWideStringField *User_ClientDataSetUSER_ID;
	TWideStringField *User_ClientDataSetUSER_NAME;
	TWideStringField *User_ClientDataSetPASSWORD;
	TIntegerField *User_ClientDataSetUSER_GROUP;
	TSQLQuery *User_SQLQuery;
	TTimer *Timer;
	TDBEdit *Main_DBEdit_ID;
	TDBEdit *Main_DBEdit_Name;
	TDBEdit *Main_DBEdit_Price;
	TDBEdit *Main_DBEdit_Quantity;
	TWideStringField *Sale_ClientDataSetSA_USERID;
	TWideStringField *Sale_ClientDataSetSA_PDNAME;
	TWideStringField *Sale_ClientDataSetSA_PDPRICE;
	TIntegerField *Sale_ClientDataSetSA_PDQUA;
	TSQLTimeStampField *Sale_ClientDataSetSA_TIMETABLE;
	TDBEdit *Main_DBEdit_Sale_Aut;
	TDBEdit *Main_DBEdit_Sale_ID;
	TDBEdit *Main_DBEdit_Sale_Name;
	TDBEdit *Main_DBEdit_Sale_Password;
	TSQLTimeStampField *Result_ClientDataSetRES_DATE;
	TWideStringField *Result_ClientDataSetRES_USERID;
	TWideStringField *Result_ClientDataSetRES_INMONEY;
	TWideStringField *Result_ClientDataSetRES_INCARD;
	TWideStringField *Result_ClientDataSetRES_TOTAL;
	void __fastcall Main_exit_btnClick(TObject *Sender);
	void __fastcall Main_Btn_Self_BarcodeClick(TObject *Sender);
	void __fastcall Main_Btn_LoginClick(TObject *Sender);
	void __fastcall Main_Btn_SettingClick(TObject *Sender);
	void __fastcall sBitBtn28Click(TObject *Sender);
	void __fastcall Main_Btn_RefundClick(TObject *Sender);
	void __fastcall TimerTimer(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Main_Add_Amonut_BtnClick(TObject *Sender);
	void __fastcall Main_Grid_ItemsSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall Main_Sub_Amonut_BtnClick(TObject *Sender);
	void __fastcall Main_Grid_Cancel_BtnClick(TObject *Sender);
	void __fastcall Main_Cash_BtnClick(TObject *Sender);
	void __fastcall Main_Card_BtnClick(TObject *Sender);
	void __fastcall Main_TouchKeyboardKeyClick(TObject *Sender, int Index);
	void __fastcall Main_payment_btnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);



private:	// User declarations
public:		// User declarations
	__fastcall TMain_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMain_Form *Main_Form;
//---------------------------------------------------------------------------
#endif
