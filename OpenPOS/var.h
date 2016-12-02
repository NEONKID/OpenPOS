#include <vcl.h>
#include <stdio.h>
#include <iostream>

#include "Main.h"
#include "Setting_Items.h"
#include "Self_Varcode.h"
#include "Login.h"
#include "Setting_User.h"
#include "Show_Settlement.h"
#include "Ini_Info.h"
#include "Refund.h"
#include "Common.h"

typedef struct __Control__
{
//Main_Form
	int varcode;
	bool varcode_flag;
	int main_grid_count;
	int main_item_grid_y;
	bool cash;
	bool main_calcul;

//±ÇÇÑ
	bool Login_State;
}__Control;

extern __Control Control;
