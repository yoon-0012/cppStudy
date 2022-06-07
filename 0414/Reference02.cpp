#include<iostream>

int main()
{
	int orig = 10;
	int& ref = orig;
	ref = 20;
	std::cout << "orig = " << orig << ", ref = " << ref << std::endl;

	int* pos01 = &ref;
	*pos01 = 30;
	std::cout << "orig = " << orig << ", ref = " << ref << std::endl;

	//int* pos02 = ref;

}