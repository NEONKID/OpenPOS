//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
























































USEFORM("Setting_Items.cpp", Setting_Items_Form);
USEFORM("Self_Varcode.cpp", Self_Varcode_Form);
USEFORM("Setting_User.cpp", Setting_User_Form);
USEFORM("Show_Settlement.cpp", Show_Settlement_Form);
USEFORM("Refund.cpp", Refund_Form);
USEFORM("Ini_Info.cpp", Ini_Info_Form);
USEFORM("Login.cpp", Login_Form);
USEFORM("Main.cpp", Main_Form);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMain_Form), &Main_Form);
		Application->CreateForm(__classid(TSetting_Items_Form), &Setting_Items_Form);
		Application->CreateForm(__classid(TSelf_Varcode_Form), &Self_Varcode_Form);
		Application->CreateForm(__classid(TLogin_Form), &Login_Form);
		Application->CreateForm(__classid(TSetting_User_Form), &Setting_User_Form);
		Application->CreateForm(__classid(TShow_Settlement_Form), &Show_Settlement_Form);
		Application->CreateForm(__classid(TIni_Info_Form), &Ini_Info_Form);
		Application->CreateForm(__classid(TRefund_Form), &Refund_Form);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
