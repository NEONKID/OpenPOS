//---------------------------------------------------------------------------
#pragma hdrstop

#include "var.h"
#include "Common.h"
//---------------------------------------------------------------------------
void Query_Items(char* start, String input, char* end)
{
	char temp[1000] = {0,};
	strcat(temp,start);
	strcat(temp,((AnsiString)input).c_str());
	strcat(temp,end);
	input = temp;

	Main_Form->Items_SQLQuery->SQL->Clear();
	Main_Form->Items_SQLQuery->SQL->Add(input);
	Main_Form->Items_ClientDataSet->Active = false;
	Main_Form->Items_ClientDataSet->Active = true;
}

//---------------------------------------------------------------------------

void Query_Sale(String user, String product, String price, String day, String time, String quantity)
{
	char temp[1000] = {0,};

	strcat(temp,"INSERT INTO db_project.op_sale (`SA_USERID`, `SA_PDNAME`, `SA_PDPRICE`, `SA_TIMETABLE`,`SA_PDQUA`) VALUES ('");
	strcat(temp,((AnsiString)user).c_str());
	//strcat(temp,"admin");
	strcat(temp,"','");
	strcat(temp,((AnsiString)product).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)price).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)day).c_str());
	strcat(temp,((AnsiString)time).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)quantity).c_str());
	strcat(temp,"');");

	//Alert(temp);
	Main_Form->Sale_SQLQuery->SQL->Clear();
	Main_Form->Sale_SQLQuery->SQL->Add(temp);
	Main_Form->Sale_SQLQuery->ExecSQL(true);
}

//---------------------------------------------------------------------------

void Query_Item_Update_Qua(String pname, String quantity)
{
	char temp[1000] = {0,};

	strcat(temp,"UPDATE `db_project`.`op_product` SET `PD_COUNT`= `PD_COUNT`-");
	strcat(temp,((AnsiString)quantity).c_str());
	strcat(temp," WHERE `PD_NAME`='");
	strcat(temp,((AnsiString)pname).c_str());
	strcat(temp,"';");

	Main_Form->Items_SQLQuery->SQL->Clear();
	Main_Form->Items_SQLQuery->SQL->Add(temp);
	Main_Form->Items_SQLQuery->ExecSQL(true);
}

//---------------------------------------------------------------------------

void Query_Login(String id)
{
	char temp[1000] = {0,};
	//SELECT * FROM db_project.op_user where USER_ID = 'admin';
	strcat(temp,"SELECT * FROM db_project.op_user where USER_ID = '");
	strcat(temp,((AnsiString)id).c_str());
	strcat(temp,"';");

	Main_Form->User_SQLQuery->SQL->Clear();
	Main_Form->User_SQLQuery->SQL->Add(temp);
	Main_Form->User_SQLQuery->ExecSQL(true);

	Main_Form->User_ClientDataSet->Active = false;
	Main_Form->User_ClientDataSet->Active = true;
}

//---------------------------------------------------------------------------

void Query_Result_Update(String date, String time, String name, String cash, String card, String total)
{
	char temp[1000] = {0,};

	strcat(temp,"INSERT INTO `db_project`.`op_result` (`RES_DATE`, `RES_USERID`, `RES_INMONEY`, `RES_INCARD`, `RES_TOTAL`) VALUES ('");
	strcat(temp,((AnsiString)date).c_str());
	strcat(temp,((AnsiString)time).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)name).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)cash).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)card).c_str());
	strcat(temp,"','");
	strcat(temp,((AnsiString)total).c_str());
	strcat(temp,"');");

	Main_Form->Result_SQLQuery->SQL->Clear();
	Main_Form->Result_SQLQuery->SQL->Add(temp);
	Main_Form->Result_SQLQuery->ExecSQL(true);

}

#pragma package(smart_init)
