#include<iostream>
using namespace std;

class Employee
{
	string firstName;
	string initial;
	string lastName;

public:
	void set(string, string, string);
	virtual void pay();
};

class SalaryEmployee:public Employee
{
	int monthPay;

public:
	virtual void pay(int);
};

class HourlyEmployee:public Employee
{
	int hourPay;

public:
	virtual void pay(int);
};