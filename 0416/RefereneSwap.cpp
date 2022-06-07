#include<iostream>

void swapref(int& a, int& b)
{
	int c(a);
	a = b;
	b = c;
}

int main()
{
	int x = 10, y = 20;
	swapref(x, y);
	std::cout << "x : " << x << ", y : " << y << std ::endl;
}