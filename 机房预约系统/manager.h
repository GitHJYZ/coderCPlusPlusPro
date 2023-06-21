#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include "globalFile.h"
#include "computerRoom.h"

using namespace std;

class Manager :public Identity
{
public:

	//Ĭ�Ϲ���
	Manager();

	//�вι���  ����Ա����������
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�  
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//��ʼ������
	void initVector();

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	bool checkRepeat(int id, int type);

	vector<ComputerRoom> vCom;
	//���ԤԼ��¼
	void cleanFile();

};