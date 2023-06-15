#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "member_operate.h"

using namespace std;

void addPreson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "��ϵ������" << endl;
		return;
	}
	else
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->pArray[abs->m_Size].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->pArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "���������룺" << endl;
		}

		cout << "���������䣺" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age < 0 || age > 150)
			{
				cout << "����������age��" << endl;
			}
			else
			{
				abs->pArray[abs->m_Size].m_Age = age;
				break;
			}
		}

		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->pArray[abs->m_Size].m_Phone = phone;

		cout << "�������ַ��" << endl;
		string adress;
		cin >> adress;
		abs->pArray[abs->m_Size].m_Addr = adress;
	}

	abs->m_Size++;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");//����

}

void showPreson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->pArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->pArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->pArray[i].m_Age << "\t";
			cout << "�绰��" << abs->pArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->pArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");//����
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
	cout << "����Ҫɾ������ϵ��" << endl;
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");//����
}

void findPreson(Addressbooks* abs)
{
	cout << "����Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->pArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->pArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->pArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->pArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->pArray[ret].m_Addr << endl;
	}
	else
		cout << "���޴���" << endl;

	system("pause");
	system("cls");//����
}

void modifyPreson(Addressbooks* abs)
{
	cout << "����Ҫz�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->pArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->pArray[ret].m_Sex = sex;
				break;
			}
			cout << "���������룺" << endl;
		}

		cout << "���������䣺" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age < 0 || age > 150)
			{
				cout << "����������age��" << endl;
			}
			else
			{
				abs->pArray[ret].m_Age = age;
				break;
			}
		}

		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->pArray[ret].m_Phone = phone;

		cout << "�������ַ��" << endl;
		string adress;
		cin >> adress;
		abs->pArray[ret].m_Addr = adress;

		cout << "�޸ĳɹ�" << endl;
	}
	else
		cout << "���޴���" << endl;

	system("pause");
	system("cls");//����
}

void cleanPreson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");//����
}