#include<iostream>

class Account
{
public:
	Account(double initial) { balance = initial; }
	double GetBalance() { return balance; }
private:
	double balance;
};

double Account = 15.37;

int main()
{
	class Account checking(Account);
	std::cout << "���� �ܰ� ��ȸ : " << checking.GetBalance() << "\n";

	return 0;
}