#include "course.h"

fraction::fraction(int fir, int sec) : molecular(fir), denominator(sec)
{
	cout << molecular << "/" << denominator << endl;
}
fraction::~fraction() {}

int fraction::getNumer()
{
	return molecular;
}
int fraction::getDenom()
{
	return denominator;
}

fraction& multipl(fraction& fract1, fraction& fract2)
{
	int check{};
	int mol = fract1.getNumer() * fract2.getNumer();
	int den = fract1.getDenom() * fract2.getDenom();

	if (mol > den)
		check = den;
	else
		check = mol;

	for (int i = 2; i <= check; ++i)
	{
		if (den % i == 0 && mol % i == 0)
		{
			den /= i;
			mol /= i;
			--i;
		}
	}

	fraction res{ mol,den };

	return res;
}