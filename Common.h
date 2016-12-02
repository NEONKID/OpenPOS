//---------------------------------------------------------------------------

#ifndef CommonH
#define CommonH
//---------------------------------------------------------------------------
void Query_Items(char* start, String input, char* end);
void Query_Sale(String user, String product, String price, String day, String time, String quantity);
void Query_Item_Update_Qua(String pname, String quantity);
void Query_Login(String id);
void Query_Result_Update(String date, String time, String name, String cash, String card, String total);

#endif
