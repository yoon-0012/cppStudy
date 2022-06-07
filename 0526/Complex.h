#pragma once
#include <iostream>
using namespace std;

class CComplex
{
	double x, y;

public:
	CComplex(int, int);
	CComplex(double, double);
	void print();

	//22.05.24
	void operator += (CComplex&);
	void operator -= (CComplex&);
	void operator *= (CComplex&);
	void operator /= (CComplex&);
	//

	//22.05.26
	CComplex operator + (CComplex&);
	CComplex operator - (CComplex&);
	CComplex operator * (CComplex&);
	CComplex operator / (CComplex&);
	//
};

