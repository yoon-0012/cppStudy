#include"21.h"

void Employee::pay()
{
	/*cout << "���� �ñ��� 9160�� �������� ȯ���ϸ�" << endl;
	cout << "22,973,280�� �Դϴ�." << endl;*/

	cout << lastName << firstName << "���� ";
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
	cout << "���� " << yearPay << "���� �������� ȯ���ϸ�" << endl;
	cout <<"�� "<< yearPay / 12 / 10000 << "���� �Դϴ�." << endl << endl;
}

void HourlyEmployee::pay(int yearPay)
{
	Employee::pay();
	cout << "���� " << yearPay << "���� �ñ����� ȯ���ϸ�" << endl;
	cout << yearPay / 12 / 209 << "�� �Դϴ�." << endl << endl;
};
