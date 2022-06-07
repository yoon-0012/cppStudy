#include<iostream>

void Print_int(int x)
{
	printf("%d �μ��� %s�Դϴ�.\n", x, (x )? "��" : "����");
}

void Print_bool(bool x)
{
	std::cout << x << "�μ��� " << (x ? "��" : "����") << "�Դϴ�." << std::endl;

	std::cout << "bool Ÿ���� �����ʹ� " << std::boolalpha << x << "��" << !x << "�� ǥ���� �� �ֽ��ϴ�." << std::endl;
}

int main()
{
	bool ok = true;
	bool notok = false;

	Print_int(100);
	Print_bool(ok);

	std::cout << notok << ' ' << std::noboolalpha << notok << std::endl;

	std::boolalpha(std::cout);
	std::cout << notok << std::endl;

	bool istrue;

	std::cin >> std::boolalpha >> istrue;
	std::cout << istrue << " = " << (istrue == true) << std::endl;

	return 0;
}