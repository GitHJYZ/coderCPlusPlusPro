#pragma once
#ifndef _MEMBER_OPERATE_H_
#define _MEMBER_OPERATE_H_
using namespace std;
#include <string>

#define MAX 1024

//memeber info
struct Preson
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Preson pArray[MAX];
	int m_Size;
};

extern void addPreson(Addressbooks* abs);
extern void showPreson(Addressbooks* abs);
extern void deletePreson(Addressbooks* abs);
extern void findPreson(Addressbooks* abs);
extern void modifyPreson(Addressbooks* abs);
extern void cleanPreson(Addressbooks* abs);
extern int isExist(Addressbooks* abs, string name);


#endif
