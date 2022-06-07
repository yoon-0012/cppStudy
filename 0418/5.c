#include<stdio.h>	
int fun_call_by_val(int, int);

int main() {
	int ary[] = { 10, 20, 33, 44, 55, 66, 77, 88, 99 };
	int sum = 0;

	for (int i = 0; i < sizeof(ary)/sizeof(ary[0]); i++)
		sum = fun_call_by_val(ary[i], sum);
	printf("The total is % d\n", sum);

	return 0;
}int fun_call_by_val(int _ary,int sum){	return _ary + sum;}