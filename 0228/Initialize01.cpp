#include<iostream>
#include<cstdio>

int main()
{
	int a = 10;
	std::cout << "a : " << a << std::endl;

	int b(20);
	std::cout << "b : " << b << std::endl;

	int c{ 30 };
	std::cout << "c : " << c << std::endl;

	int d = int(40);
	std::cout << "d : " << d << std::endl;

	int e();
	//if (e) std::cout << "e : " << e << std::endl;

	int f = int();
	std::cout << "f : " << f << std::endl;

	int g = { 50 };
	std::cout << "g : " << g << std::endl;

	int* h = new int;
	std::cout << "*h : " << *h << std::endl;

	int* i = new int();
	std::cout << "*i : " << *i << std::endl;

	int* j = new int(60);
	std::cout << "*j : " << *j << std::endl;

	bool ok = true;

	std::cout << std::boolalpha << ok << '\n';
	std::cout << std::noboolalpha << ok << '\n';

	return 0;
}