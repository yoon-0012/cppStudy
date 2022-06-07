#include<iostream>
#include<string>

struct W
{
	W(int&, int&)
	{
		std::cout << "W(int&, int&)" << std::endl;
	}
};

struct X
{
	X(const int&, int&)
	{
		std::cout << "X(const int&, int&)" << std::endl;
	}
};

struct Y
{
	Y(int&, const int&)
	{
		std::cout << "Y(int&, const int&)" << std::endl;
	}
};

struct Z
{
	Z(const int&, const int&)
	{
		std::cout << "Z(const int&, const int&)" << std::endl;
	}
};

template<typename T, typename A1,typename A2>
T* factory(const A1& a1,const A2& a2)
{
	return new T(a1, a2);
}

int main()
{
	int a = 4, b = 5;

	W* pw = factory<W>(a, b);
	X* px = factory<X>(2, b);
	Y* py = factory<Y>(a, 2);
	Z* pz = factory<Z>(2, 2);
}