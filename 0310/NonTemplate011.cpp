#include<iostream>

template<int& ri>
struct Simple
{
	Simple()
	{
		printf("��ü ���� �� ri�� %d �̴�.\n", ri);
	}
	~Simple()
	{
		printf("��ü �Ҹ�� ri�� %d �̴�.\n", ri);
	}
};

int i = 1;

int main()
{
	Simple<i>s;
	i = 0;
}