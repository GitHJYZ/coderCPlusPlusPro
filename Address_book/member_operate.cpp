#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "member_operate.h"

using namespace std;

void addPreson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "联系人已满" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->pArray[abs->m_Size].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->pArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "请重新输入：" << endl;
		}

		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age < 0 || age > 150)
			{
				cout << "请重新输入age：" << endl;
			}
			else
			{
				abs->pArray[abs->m_Size].m_Age = age;
				break;
			}
		}

		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->pArray[abs->m_Size].m_Phone = phone;

		cout << "请输入地址：" << endl;
		string adress;
		cin >> adress;
		abs->pArray[abs->m_Size].m_Addr = adress;
	}

	abs->m_Size++;
	cout << "添加成功" << endl;

	system("pause");
	system("cls");//清屏

}

void showPreson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->pArray[i].m_Name << "\t";
			cout << "性别：" << (abs->pArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->pArray[i].m_Age << "\t";
			cout << "电话：" << abs->pArray[i].m_Phone << "\t";
			cout << "住址：" << abs->pArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");//清屏
}

int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->pArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePreson(Addressbooks* abs)
{
	cout << "输入要删除的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->pArray[i] = abs->pArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");//清屏
}

void findPreson(Addressbooks* abs)
{
	cout << "输入要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->pArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->pArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->pArray[ret].m_Age << "\t";
		cout << "电话：" << abs->pArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->pArray[ret].m_Addr << endl;
	}
	else
		cout << "查无此人" << endl;

	system("pause");
	system("cls");//清屏
}

void modifyPreson(Addressbooks* abs)
{
	cout << "输入要z修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->pArray[ret].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->pArray[ret].m_Sex = sex;
				break;
			}
			cout << "请重新输入：" << endl;
		}

		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age < 0 || age > 150)
			{
				cout << "请重新输入age：" << endl;
			}
			else
			{
				abs->pArray[ret].m_Age = age;
				break;
			}
		}

		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->pArray[ret].m_Phone = phone;

		cout << "请输入地址：" << endl;
		string adress;
		cin >> adress;
		abs->pArray[ret].m_Addr = adress;

		cout << "修改成功" << endl;
	}
	else
		cout << "查无此人" << endl;

	system("pause");
	system("cls");//清屏
}

void cleanPreson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");//清屏
}