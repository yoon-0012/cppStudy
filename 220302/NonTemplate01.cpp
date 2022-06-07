#include<iostream>
#include<cstring>

template <int i>
class A
{
	int array[i];
	const int length = i;
	
public:
	A() { memset(array, 0, i * sizeof(int)); }	
};

int main()
{
	A<10> a;
}