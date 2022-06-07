#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class fraction
{
private:
	int molecular;
	int denominator;

public:
	fraction(int , int );
	~fraction();

	int getNumer();
	int getDenom();
};
fraction& multipl(fraction&, fraction&);
#endif
