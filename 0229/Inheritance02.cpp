#include<iostream>
#include<string>

struct Person
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

class Student :public Person
{
public:
	Student(std::string i,std::string n):Person(n),id(i){}

	std::string GetID()
	{
		return id;
	}

private:
	std::string id;
};

int main()
{
	Student s1("16-31-001", "ȫ�浿");

	std::cout << "�л� ID : " << s1.GetID()
		<< ", �̸� : " << s1.GetName() << std::endl;

	return 0;
}