#include<iostream>

static const int calcConstant()
{
	int foo = 0;

	std::cout << "초기값을 입력하시기 바랍니다.";
	std::cin >> foo;

	return foo;
}

int main()
{
	static const int maxarray = calcConstant();
	char store[maxarray];

	std::cout << "문자열을 입력하십시오. ";
	std::cin >> store;

	std::cout << maxarray << " , " << store << std::endl;

	return 0;
}