#include<iostream>

static const int calcConstant()
{
	int foo = 0;

	std::cout << "�ʱⰪ�� �Է��Ͻñ� �ٶ��ϴ�.";
	std::cin >> foo;

	return foo;
}

int main()
{
	static const int maxarray = calcConstant();
	char store[maxarray];

	std::cout << "���ڿ��� �Է��Ͻʽÿ�. ";
	std::cin >> store;

	std::cout << maxarray << " , " << store << std::endl;

	return 0;
}