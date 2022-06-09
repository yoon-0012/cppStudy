#include<stdio.h>
typedef struct score
{
	double math;
	double eng;
	double total;
}score;

typedef struct student
{
	char id[20];
	char name[20];
	score score;
	char location[30];
}student;

void get_score(student*);
void display_student(student*);

int main(void)
{
	struct friends bestFriend[5] =
	{ {"������","010-8020-9271","tennis","����1��"},
	{"�����","010-1234-8785","soccer","����2��"},
	{"�̵���","010-4444-1111","cooking","����3��"},
	{"ȫ����","010-8564-8881","dancing","����4��"},
	{"������","010-7777-0000","walking","����5��"}, };

	printList(bestFriend);

	return 0;
}
void printList(struct friends* bestFriend)
{
	for (int i = 0; i < 5; ++i)
	{
		printf("�̸�: %s\n", bestFriend[i].name);
		printf("����ó: %s\n", bestFriend[i].phNum);
		printf("���: %s\n", bestFriend[i].hobby);
		printf("�ּ�: %s\n\n\n", bestFriend[i].location);
	}
}