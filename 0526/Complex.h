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

	void operator += (CComplex&);
	void operator -= (CComplex&);
	void operator *= (CComplex&);
	void operator /= (CComplex&);

	CComplex operator + (CComplex&);
	CComplex operator - (CComplex&);
	CComplex operator * (CComplex&);
	CComplex operator / (CComplex&);
};

