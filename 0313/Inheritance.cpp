#include<iostream>
#include<cstring>	

class Person
{
public:
	Person(std::string n):name(n){}
	std::string GetName()
	{
		return name;
	}

private:
	std::string name;
};

class Student
{
public:
	Student(std::string i, std::string n):id(i)
	{
		person = new Person(n);
	}
	~Student()
	{
		delete person;
	}
	std::string GetID()
	{
		return id;
	}
	Person* person;

private:
	std::string id;
};

int main()
{
	Student s1("16-31-001", "ȫ�浿");

	std::cout << "�л� ID : " << s1.GetID()
		<< ", �̸� : " << s1.person->GetName() << std::endl;
}