//1. ������ ���� ���� ���� �迭 array[10]�� main()���� ���� �� �ʱⰪ
//����
//2. �迭�� �Ű������� �� �迭 �� �� �ּ� ���� ���ϴ� �Լ� int min(int
//	* array)�� �ۼ�
//	3. int min(int*)���� ��ȯ ���� �ּҰ��� main()���� ȭ�鿡 ���

#include<stdio.h>	
int min(int* array);

int main()
{
	int arr[10];
	int minimum;
	srand(time(NULL));

	for (int i = 0; i < 10; ++i)
		*(arr + i) = rand();

	minimum = min(arr);
	printf("�ּҰ� - %d", minimum);

	return 0;
}
int min(int* array)
{
	int minimum = *array;
	
	for (int i = 0; i < 10; ++i)
	{
		printf("%d   ", array[i]);
		if (array[i] < minimum)
			minimum = array[i];
	}

	return minimum;
}