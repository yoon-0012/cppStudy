#include<iostream>
#include<cstring>
#define BUFFER_SIZE 20

int main()
{
	char* pch1 = new char[BUFFER_SIZE]();
	
	int* ptr = new int;
	std::cout << "ptr = " << *ptr << std::endl;
	for (int i = 0; i < BUFFER_SIZE; ++i)
		std::cout << (( 0== pch1[i]) ? '.' : pch1[i]);
	
	std::cout << std::endl;

	char* pch2 = new char[BUFFER_SIZE];
	for (int i = 0; i < BUFFER_SIZE; ++i)
		std::cout << ((0 == pch2[i]) ? '.' : pch2[i]);

	std::cout << std::endl;

	return 0;
}