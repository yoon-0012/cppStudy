#include<iostream>
#include<cstdio>

void temp(int, double, const char*);
void temp(int i = 4, double f = 3.141592, const char *c= "");
void m();

int main()
{
	m();
	temp(600);
	
	return 0;
}

void m()
{
	void temp(int, double = 1.0, const char *c= "�ȳ��ϼ���!");
	temp(4, 6.1, "Hello Default Argument!");
	temp(64);
}

void temp(int i, double f, const char* c)
{
	printf("���� : %d, �Ǽ� : %4f, ���� : %s\n", i, f, c);
}