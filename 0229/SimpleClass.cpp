#include<iostream>

class SimplClass
{
public:
	int xval;
};

int main()
{
	SimplClass ss;
	ss.xval = 5;
	std::cout << "객체에 저장된 값은 " << ss.xval << "이다.\n";

	return 0;
}