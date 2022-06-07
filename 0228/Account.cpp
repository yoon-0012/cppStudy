#include<iostream>
#include<cstring>
#include<cstdlib>

struct Account
{
	char* account;
	char* name;
	int balance;

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
};

Account* OpenAcct(const char* id, const char* name, int bal)
{
	Account* temp = new Account();
	if (nullptr == temp)
		return nullptr;

	char* newid = new char[strlen(id) + 1];
	if (nullptr == newid)return nullptr;

	strcpy_s(newid,strlen(id)+1, id);
	temp->account = newid;

	char* newname = new char[strlen(name) + 1];
	if (nullptr == newname)return nullptr;

	strcpy_s(newname,  strlen(name) + 1, name);
	temp->name = newname;
	temp->balance = bal;
	std::cout << "Account °´Ã¼¸¦ »ý¼ºÇÏ¿´½À´Ï´Ù." << std::endl;

	return temp;
}

int CloseAcct(Account* acct)
{
	std::cout << "Account °´Ã¼¸¦ »èÁ¦ÇÏ¿´½À´Ï´Ù." << std::endl;
	delete[] acct->account;
	delete[] acct->name;
	delete acct;

	return 1;
}

int main()
{
	Account* hong = OpenAcct("120-345-129099", "È«±æµ¿", 60000);
	if (nullptr == hong)
		return -1;

	Account* kim = OpenAcct("129-345-929100", "±èÈ«µµ", 0);
	if (nullptr == kim)
		return -1;

	hong->Withdraw(2000);
	kim->Deposit(2000);
	hong->Print();
	kim->Print();

	CloseAcct(hong);
	CloseAcct(kim);

	return 0;
}