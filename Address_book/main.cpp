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
	cout << "****** 1.�����ϵ�� ******" << endl;
	cout << "****** 2.��ʾ��ϵ�� ******" << endl;
	cout << "****** 3.ɾ����ϵ�� ******" << endl;
	cout << "****** 4.������ϵ�� ******" << endl;
	cout << "****** 5.�޸���ϵ�� ******" << endl;
	cout << "****** 6.���ͨѶ¼ ******" << endl;
	cout << "****** 0.�˳�ͨѶ¼ ******" << endl;
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
				cout << "��ӭ�´�ʹ��" << endl;
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