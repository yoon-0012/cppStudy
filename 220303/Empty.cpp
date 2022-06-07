#include<iostream>
#include<string>

template<class T>
struct Empty
{
	typedef T type;
	virtual void Display() = 0;
};

template<class T>
class Optimized :public Empty<T>
{
	typename Empty<T>::type data;
public:
	Optimized(typename Empty<T>::type c):data(c){}

	typename Empty<T>::type GetData()
	{
		return data;
	}
	virtual void Display() final;
};

int main()
{
	Optimized<int> e(100);
	Empty<std::string>::type s = "문자열 입력";

	std::cout << "Empty 객 체 : " << e.GetData() << std::endl;
	e.Display();
	std::cout << s << std::endl;
}

template<class T>
void Optimized<T>::Display()
{
	std::cout << "Optimized : " << data << std::endl;
}