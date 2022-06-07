#include<iostream>
#include<cstdio>

struct Data
{
	int age;
	char name[100];
	int balance;
};
void Print(Data user)
{
	std::cout << user.age << ", " << user.name << ", 잔 액 : "
		<< user.balance << std::endl;
}

int main()
{
	//Data user01 = 21;

	//Data user02(33, "이순신", 20000);

	Data user03{ 53,"강감찬",45000 };
	Print(user03);

	//Data user04 = Data(45, "이성계", 60000);

	//Data user05();

	Data user06 = Data();
	Print(user06);

	Data user07 = { 21,"honggildong",10000 };
	Print(user07);

	/*Data user08;
	Print(user08);*/

	Data* user_08 = new Data;
	Print(*user_08);

	Data* user09 = new Data();
	Print(*user09);;

	return 0;
}