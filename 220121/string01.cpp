#include<iostream>
#include<cstdlib>
#include<cstring>

int main()
{
	const char* cc = "���ڿ��� �Է��մϴ�. This is a string";
	char cb[17];
	char* str;

	memcpy(cb, cc, 17);
	str = (char*)malloc(strlen(cc) + 1);
	strcpy_s(str,strlen(cc) + 1,cc);
	
	std::cout << "cb = " << cb << ", ���ڿ��� ũ��� " << strlen(cb) << std::endl;
	std::cout << "str= " << str << ", ���ڿ��� ũ��� " << strlen(str) << std::endl;
	free(str);

	return 0;
}