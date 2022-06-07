#include"21.h"

void Employee::pay()
{
	/*cout << "최저 시급은 9160을 연봉으로 환산하면" << endl;
	cout << "22,973,280원 입니다." << endl;*/

	cout << lastName << firstName << "씨의 ";
}
void Employee::set(string f, string i, string l)
{
	firstName = f;
	initial = i;
	lastName = l;
}

void SalaryEmployee::pay(int yearPay)
{
	Employee::pay();
	cout << "연봉 " << yearPay << "원을 월급으로 환산하면" << endl;
	cout <<"약 "<< yearPay / 12 / 10000 << "만원 입니다." << endl << endl;
}

void HourlyEmployee::pay(int yearPay)
{
	Employee::pay();
	cout << "연봉 " << yearPay << "원을 시급으로 환산하면" << endl;
	cout << yearPay / 12 / 209 << "원 입니다." << endl << endl;
};
