#include "course.h"

int main()
{
	int mol1, den1, mol2, den2;

	cout << "���� �� �м��� �Է��ϼ���" << endl;
	cout << "�м�1: ";
	cin >> mol1 >> den1;
	cout << "�м�2: ";
	cin >> mol2 >> den2;

	fraction fract1(mol1, den1);
	fraction fract2(mol2, den2);

	cout << "�� �м��� ��: ";
	multipl(fract1, fract2);
}


