#include<iostream>

void Swap(int a, int b)
{
	int c(a); a = b; b = c;
}

int main()
{
	int x = 10, y = 20;
	Swap(x, y);
	std::cout << "x : " << x << ", y : " << y << std::endl;
}