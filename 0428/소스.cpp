#include<stdio.h>
#include<string.h>
char* reverse(char*);
void reverse2(char*);

int main(void)
{
	char what[30];

	printf("���ڿ� �Է�: ");
	scanf_s("%s", what);

	printf("1�� ���: %s\n", reverse(what));

	reverse2(what);
	printf("2�� ���: %s", what);

	return 0;
}
char* reverse(char* s)
{
	char* p, * q, tmp;
	int n;

	n = strlen(s);
	q = (n > 0) ? s + n - 1 : s;
	for (p = s; p < q; ++p,--q)
	{
		tmp = *p;
		*p = *q;
		*q = tmp;
	}

	return s;
}
void reverse2(char* s)
{
	char* p, * q, tmp;
	int n;

	n = strlen(s);
	q = (n > 0) ? s + n - 1 : s;
	for (p = s; p < q; ++p, --q)
	{
		tmp = *p;
		*p = *q;
		*q = tmp;
	}
}
