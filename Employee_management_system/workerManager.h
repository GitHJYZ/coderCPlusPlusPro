#pragma
#include <iostream>
#include <fstream>
#include "manager.h"
#include "boss.h"
#include "employee.h"
#include "worker.h"

using namespace std;

#define FILENAME "empfile.txt"

//ְ��������
class WorkerManager
{
public:
	WorkerManager();

	void Show_Menu();
	void Add_Emp();
	void save();
	void exitSystem();

	~WorkerManager();

	int m_EmpNum;
	bool m_FileIsEmpty;

	int get_EmpNum();

	void init_Emp();

	void show_Emp();

	void del_Emp();

	void mod_Emp();

	void find_Emp();

	void sort_Emp();

	void clean_File();

	//�ж�ְ���Ƿ���ڣ����ڷ��������е�λ�ã������ڷ���-1
	int IsExist(int id);

	Worker** m_EmpArray;
};

