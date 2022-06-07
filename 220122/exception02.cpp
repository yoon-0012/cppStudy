#include<stdexcept>
#include<iostream>

void CopyObject(const char* original)
{
	if (nullptr == original)
	{
		throw std::runtime_error("�μ��� NULL�̴�.");
	}
	std::cout << original << std::endl;
}

int main()
{
	char* name = nullptr;
	try
	{
		CopyObject(name);
	}
	catch (std::runtime_error& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (int e)
	{
		std::cerr << e << std::endl;
	}
	catch (...)
	{
		std::cerr << "��� exception ó��." << std::endl;
	}

	return 0;
}