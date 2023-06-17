#pragma
#include <iostream>
#include <fstream>
#include "manager.h"
#include "boss.h"
#include "employee.h"
#include "worker.h"

using namespace std;

#define FILENAME "empfile.txt"

//职工管理类
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

	//判断职工是否存在，存在返回数组中的位置，不存在返回-1
	int IsExist(int id);

	Worker** m_EmpArray;
};

