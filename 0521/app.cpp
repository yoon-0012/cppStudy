#include"21.h"

int main()
{
	SalaryEmployee salEmp[3];
	salEmp[0].set("����", "YEJ", "��");
	salEmp[1].set("����", "CSW", "��");
	salEmp[2].set("����", "KMJ", "��");

	HourlyEmployee houEmp[3];
	houEmp[0].set("����", "LDY", "��");
	houEmp[1].set("����", "LJY", "��");
	houEmp[2].set("����", "HMJ", "ȫ");

	salEmp[0].pay(70000000);
	salEmp[1].pay(35000000);
	salEmp[2].pay(40000000);

	houEmp[0].pay(50000000);
	houEmp[1].pay(30000000);
	houEmp[2].pay(41000000);
}