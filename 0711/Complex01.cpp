#include<iostream>
#include<cstdio>

struct Complex
{
public:
	Complex(double x) :real(x), imaginary(0.0)
	{
		printf("Complex(double % .2f) ȣ��\n", x);
	}

	Complex(double x, double y) :real(x), imaginary(y)
	{
		printf("Complex(double %.2f, double %.2f) ȣ��\n", x, y);
	}

private:
	double real;
	double imaginary;
};

int main()
{
	Complex a1 = 1;

	Complex a2(2);

	Complex a3{ 4,5 };

	Complex01 a4 = { 4,5 };
}