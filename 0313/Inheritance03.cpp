#include<iostream>
#include<cstring>

class Person
{
public:
	Person():Person(""){}
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
	Student(std::string n):name(n){	}
	std::string GetName()
	{
		return name;
	}

private:
	std::string name;
};

int main()
{
	Student s1("ȫ�浿");
	std::cout << "Student : " << s1.GetName() << std::endl;
	std::cout << "Person : " << s1.Person::GetName() << std::endl;
}