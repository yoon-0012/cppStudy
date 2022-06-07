#include<iostream>
#include<cstdlib>
#include<cstring>

int main()
{
	const char* cc = "문자열을 입력합니다. This is a string";
	char cb[17];
	char* str;

	memcpy(cb, cc, 17);
	str = (char*)malloc(strlen(cc) + 1);
	strcpy_s(str,strlen(cc) + 1,cc);
	
	std::cout << "cb = " << cb << ", 문자열의 크기는 " << strlen(cb) << std::endl;
	std::cout << "str= " << str << ", 문자열의 크기는 " << strlen(str) << std::endl;
	free(str);

	return 0;
}