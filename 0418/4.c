//1. 임의의 정수 값을 갖는 배열 array[10]을 main()에서 선언 및 초기값
//대입
//2. 배열을 매개변수로 그 배열 값 중 최소 값을 구하는 함수 int min(int
//	* array)를 작성
//	3. int min(int*)에서 반환 받은 최소값을 main()에서 화면에 출력

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
	printf("최소값 - %d", minimum);

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