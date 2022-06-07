#include<iostream>
#include<cstdio>
#include<cstring>

struct Account
{
	Account(const char* id, const char* name, int bal)
	{
		strcpy_s(this->account, strlen(id)+1, id);
		strcpy_s(this->name, strlen(name)+1, name);
		this->balance = bal;
	}
	void Print()
	{
		printf("°è ÁÂ : %s , ¼ÒÀ¯ÀÚ : %s", account, name);
		printf(", ÀÜ ¾× : %i\n", balance);
	}
	void Deposit(int money)
	{
		balance += money;
	}
	void Withdraw(int money)
	{
		balance -= money;
	}

private:
	char account[20];
	char name[20];
	int balance;
};

int main()
{
	char id[] = "120-345-129099";
	char name[] = "È«±æµ¿";
	Account hong = Account(id, name, 60000);
	hong.Withdraw(10000);
	hong.Print();

	/*printf("°è ÁÂ : %s , ¼ÒÀ¯ÀÚ : %s", hong.account, hong.name);
	printf(", ÀÜ ¾× : %\n", hong.balance);*/

	return 0;
}