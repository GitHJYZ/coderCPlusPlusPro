#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "member_operate.h"

using namespace std;



/*
* Menu
*/
void showMenu()
{
	cout << "**************************" << endl;
	cout << "****** 1.添加联系人 ******" << endl;
	cout << "****** 2.显示联系人 ******" << endl;
	cout << "****** 3.删除联系人 ******" << endl;
	cout << "****** 4.查找联系人 ******" << endl;
	cout << "****** 5.修改联系人 ******" << endl;
	cout << "****** 6.清空通讯录 ******" << endl;
	cout << "****** 0.退出通讯录 ******" << endl;
	cout << "**************************" << endl;
}

int main()
{
	int select = 0;
	
	Addressbooks abs;
	abs.m_Size = 0;

	while(true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
			case 1://add 
				addPreson(&abs);
				break;
			case 2://display 
				showPreson(&abs);
				break;
			case 3://delete 
				deletePreson(&abs);
				break;	
			case 4://findPreson
				findPreson(&abs);
				break;
			case 5://update
				modifyPreson(&abs);
				break;
			case 6://distory
				cleanPreson(&abs);
				break;
			case 0://outSystem
				cout << "欢迎下次使用" << endl;
				system("pause");
				return 0;
				break;
			default:
				break;
		}
	}
	system("pause");
	return 0;
}