#include<iostream>
#include<cstring>

union DataValue01
{
	int v_int;
	float v_float;
	char v_string[4];
};

struct DataValue02
{
	int v_int;
	float v_flaot;
	char v_string[4];
};

int main()
{
	std::cout << "����ü�� ũ�� = " << sizeof(DataValue01) << std::endl;
	std::cout << "����ü�� ũ�� = " << sizeof(DataValue02) << std::endl;
}