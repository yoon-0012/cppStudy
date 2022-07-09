#include<iostream>

int i = 0;

void ParamCheck(int& s)
{
	std::cout << ++i << ". " << s << " �μ��� 'int&' Ÿ���̴�.\n";
}

void ParamCheck(const int& s)
{
	std::cout << ++i << ". " << s << " �μ��� 'const int&' Ÿ���̴�.\n";
}

void ParamCheck(int&& s)
{
	std::cout << ++i << ". " << s << " �μ��� 'int&&' Ÿ���̴�.\n";
}

int main()
{
	int s = 10;

	ParamCheck(s);
	const int& cs = s;
	ParamCheck(cs);
	
	ParamCheck(static_cast<int&&>(s));
	ParamCheck((int&&)100);
}