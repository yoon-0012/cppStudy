#include<stdio.h>
void swap(int* pa, int* pb);
void bubble(int* a, int n);

int main()
{
	int arr[5];

	printf("���� 5�� �Է�: ");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	bubble(arr, 5);

	for (int i = 0; i < 5; ++i)
		printf("%d\n", arr[i]);
}
void swap(int* pa, int* pb) 
{
	double tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
void bubble(int* a, int n) 
{ //a�� �迭, n�� �迭ũ��
	int i, j;
	for (i = 0; i < n; i++)
		for (j = n - 1; j > i; --j)
			if (a[j - 1] > a[j]) swap(&a[j - 1], &a[j]);
}
