#pragma once
#include <iostream>
#include <string>
#include "speechManager.h"

using namespace std;

/*
* ѧУ����һ���ݽ�����������**12����**�μӡ�**����������**����һ��Ϊ��̭�����ڶ���Ϊ������
* ������ʽ��**���������ÿ��6����**��ѡ��ÿ��Ҫ������飬���б���
* ÿ��ѡ�ֶ��ж�Ӧ��**���**���� 10001 ~ 10012
* ��һ�ַ�Ϊ����С�飬ÿ��6���ˡ� ���尴��ѡ�ֱ�Ž���**��ǩ**��˳���ݽ���
* ��С���ݽ������̭����������������ѡ�֣�**ǰ��������**��������һ�ֵı�����
* �ڶ���Ϊ������**ǰ����ʤ��**
* ÿ�ֱ���������Ҫ**��ʾ����ѡ�ֵ���Ϣ**
*/

void SpeechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

int main()
{

	SpeechManager sm;

	srand((unsigned int)time(NULL));

	int choice = 0; //�����洢�û���ѡ��

	while (true)
	{
		sm.show_Menu();

		cout << "����������ѡ�� " << endl;
		cin >> choice; // �����û���ѡ��

		switch (choice)
		{
		case 1:  //��ʼ����
			sm.startSpeech();
			break;
		case 2:  //�鿴��¼
			sm.showRecord();
			break;
		case 3:  //��ռ�¼
			sm.clearRecord();
			break;
		case 0:  //�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls"); //����
			break;
		}
	}

	system("pause");

	return 0;
}