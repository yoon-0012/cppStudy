# include <stdio.h>
int main() {
	int array[5] = { 10, 20, 30, 40, 50 };
	// ������ ����
	int* p = NULL;
	// �����Ϳ� ���� ����
	p = array;

	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d\n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));

	return 0;
}