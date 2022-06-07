#include<stdexcept>
#include<iostream>

void CopyObject(const char* original)
{
	if (nullptr == original)
	{
		throw - 1;
	}
	std::cout << original << std::endl;
}

int main()
{
	char c;

	try
	{
		char* name =nullptr;
		CopyObject(name);
	}
	catch (int e)
	{
		std::cerr << e << std::endl;
	}
	std::cout << "���α׷� ����!" << std::endl;

	return 0;
}