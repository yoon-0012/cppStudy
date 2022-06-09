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
	{ {"À±ÀºÁö","010-8020-9271","tennis","Á¤¿Õ1µ¿"},
	{"±è¹ÎÁö","010-1234-8785","soccer","Á¤¿Õ2µ¿"},
	{"ÀÌµµÀ±","010-4444-1111","cooking","Á¤¿Õ3µ¿"},
	{"È«¸íÁø","010-8564-8881","dancing","Á¤¿Õ4µ¿"},
	{"ÀÌÀçÀ±","010-7777-0000","walking","Á¤¿Õ5µ¿"}, };

	printList(bestFriend);

	return 0;
}
void printList(struct friends* bestFriend)
{
	for (int i = 0; i < 5; ++i)
	{
		printf("ÀÌ¸§: %s\n", bestFriend[i].name);
		printf("¿¬¶ôÃ³: %s\n", bestFriend[i].phNum);
		printf("Ãë¹Ì: %s\n", bestFriend[i].hobby);
		printf("ÁÖ¼Ò: %s\n\n\n", bestFriend[i].location);
	}
}