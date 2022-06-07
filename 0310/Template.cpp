#include<iostream>

template<class T,class Type=int>
T max(Type a, Type b)
{
	return a > b ? a : b;
}

int main()
{
	std::cout << "�ִ밪: " << max<int>(3, 7.0) << std::endl;
}
