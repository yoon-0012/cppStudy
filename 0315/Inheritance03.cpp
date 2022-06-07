#include<iostream>
#include<string>

class Person
{
public:
	Person():Person(""){}
	Person(std::string n):name(n){}
	std::string GetName()
	{
		return name;
	}

protected:
	std::string degree;

private:
	std::string name;
};

class Student :private Person
{
public:
	Student(std::string n):Person(n),total(0){}
	int GetTaotal()
	{
		return total;
	}
	void AddTotal(int i)
	{
		total += i;
	}
	void SetDegree(std::string d)
	{
		degree=d;
	}
	std::string GetDegree()
	{
		return degree;
	}

private:
	int total;
};

int main()
{
	Student s1("ȫ�浿");
	s1.SetDegree("�ʵ��б� ����");
	s1.AddTotal(95);
	std::cout << "�̸� : " << s1.GetName();
	std::cout << ", �з� : " << s1.GetDegree() << ", �������� : " << s1.GetTaotal() << std::endl;
}