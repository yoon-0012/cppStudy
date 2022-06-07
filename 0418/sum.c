//정수형 배열에 10, 30, 40, 20을 저장하고 포인터로
//배열에 접근하여 배열의 합을 구하시오

#include<stdio.h>	

int main()
{
	int arr[4] = { 10,30,40,20 };
	int res = 0;
	int* p = arr;

	for (int i = 0; i < 4; ++i)
		//	res += *(arr + i);
		res += p[i];

	printf("배열의 모든 원소의 합계 : %d", res);

	return 0;
}