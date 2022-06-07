# include <stdio.h>
int main() {
	int array[5] = { 10, 20, 30, 40, 50 };
	// 포인터 선언
	int* p = NULL;
	// 포인터에 변수 지정
	p = array;

	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d\n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));

	return 0;
}