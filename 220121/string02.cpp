#include<iostream>
#include<string>

int main()
{
	const char* cc = "���ڿ��� �Է��մϴ�. This is a string";
	std::string str;

	str = cc;
	std::cout << "str= " << str.data() << ", ���ڿ��� ũ��� " << str.length() << std::endl;

	str = "Ŭ���� ���ο��� ������ ��´�.";

	str += "���� ���� �޸� ������ ���� �ʾƵ� ����� �����ϴ�.";
	std::cout << "str= " << str.data() << "���ڿ��� ũ��� " << str.length() << std::endl;

	return 0;
}