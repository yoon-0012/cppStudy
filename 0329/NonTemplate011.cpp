#include<iostream>

template <int& ri>
struct Simple
{
	Simple()
	{
		printf("객체 생성 시 ri는 %d 이다.\n", ri);
	}
	~Simple()
	{
		printf("객체 소멸 시 ri는 %d 이다.\n", ri);
	}
};

int i = 1;

int main()
{
	Simple <i>s;
	i = 0;
}