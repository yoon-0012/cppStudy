#include<cstddef>
#include<iostream>
void f(int* pi)
{
	std::cout << "������ ����Ų��.\n";
}
void f(double* pd)
{
	std::cout << "�Ǽ��� ����Ų��.\n";
}
void f(std::nullptr_t ptr)
{
	std::cout << "null ����Ʈ�̴�.\n";
}

int main()
{
	int pi = 0; double pd = 0.0;

	f(&pi);
	f(&pd);
	f(nullptr);

	return 0;
}