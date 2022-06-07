#include "course.h"

int main()
{
	int mol1, den1, mol2, den2;

	cout << "곱할 두 분수를 입력하세요" << endl;
	cout << "분수1: ";
	cin >> mol1 >> den1;
	cout << "분수2: ";
	cin >> mol2 >> den2;

	fraction fract1(mol1, den1);
	fraction fract2(mol2, den2);

	cout << "두 분수의 곱: ";
	multipl(fract1, fract2);
}


