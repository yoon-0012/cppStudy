#include"21.h"

int main()
{
	SalaryEmployee salEmp[3];
	salEmp[0].set("ÀºÁö", "YEJ", "À±");
	salEmp[1].set("¼º¿ø", "CSW", "Á¶");
	salEmp[2].set("¹ÎÁö", "KMJ", "±è");

	HourlyEmployee houEmp[3];
	houEmp[0].set("µµÀ±", "LDY", "ÀÌ");
	houEmp[1].set("ÀçÀ±", "LJY", "ÀÌ");
	houEmp[2].set("¸íÁø", "HMJ", "È«");

	salEmp[0].pay(70000000);
	salEmp[1].pay(35000000);
	salEmp[2].pay(40000000);

	houEmp[0].pay(50000000);
	houEmp[1].pay(30000000);
	houEmp[2].pay(41000000);
}