#include<iostream>

int calcConstant()
{
	int foo = 0;
	std::cout << "�ʱⰪ�� �Է��Ͻñ� �ٶ��ϴ�.";
	std::cin >> foo;
	return foo;
}

int main()
{
	const int x = calcConstant();
	std::cout << x << std::endl;

	return 0;
}