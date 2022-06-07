#include "my.h"

Student::Course::Course(int len)
{
	v = new Student[len];
}
Student::Course::~Course()
{
	delete v;
}

void Student::Course::getAllInfo(int num)
{
	for (int i = 0; i < num; ++i)
		v[i].getInfo();
}


void Student::getInfo()
{
	cout << "이름: " << name << endl;
	cout << "학점: " << gpa << endl;
}
