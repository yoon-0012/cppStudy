#include<stdio.h>
int fun_call_by_pointer(int* ary);

int main()
{
	int ary[] = { 10, 20, 33, 44, 55, 66, 77, 88, 99 };

	printf("The total is % d\n", fun_call_by_pointer(ary));

	return 0;
}
int fun_call_by_pointer(int* ary)
{
	int res = 0;
	int size = 0;

	/*for (int i=0;;++i)
	{
		if (ary[i] == NULL)
			break;
		else
			++size;
	}

	for (int i = 0; i < size; ++i)*/
	for (int i = 0; i < sizeof(ary)/sizeof(ary[0]); ++i)
		res += ary[i];

	return res;
}