//������ �迭�� 10, 30, 40, 20�� �����ϰ� �����ͷ�
//�迭�� �����Ͽ� �迭�� ���� ���Ͻÿ�

#include<stdio.h>	

int main()
{
	int arr[4] = { 10,30,40,20 };
	int res = 0;
	int* p = arr;

	for (int i = 0; i < 4; ++i)
		//	res += *(arr + i);
		res += p[i];

	printf("�迭�� ��� ������ �հ� : %d", res);

	return 0;
}