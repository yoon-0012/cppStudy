#include "Complex.h"

CComplex::CComplex(int x_, int y_)
{
	x = x_;
	y = y_;
}
CComplex::CComplex(double x_, double y_)
{
	x = x_;
	y = y_;
}

void CComplex::print()
{
	cout << x << " + " << y << "i" << endl;
}


void CComplex::operator += (CComplex& p)
{
	x = x + p.x;
	y = y + p.y;
}
void CComplex::operator -= (CComplex& p)
{
	x = x - p.x;
	y = y - p.y;
}
void CComplex::operator *= (CComplex& p)
{
	int tmp = x;

	x = x * p.x - y * p.y;
	y = tmp * p.y + p.x * y;
}
void CComplex::operator /= (CComplex& p)
{
	int tmp = x;

	x = (x * p.x + y * p.y) / (p.x * p.x + p.y * p.y);
	y = (y * p.x - tmp * p.y) / (p.x * p.x + p.y * p.y);

	//���ڴ� (x+yi)(p.x-p.yi)
	//�и�� px^ + py^
}

CComplex CComplex::operator +(CComplex& p)
{
	int tmx, tmy;

	tmx = x + p.x;
	tmy = y + p.y;

	return CComplex(tmx, tmy);
}
CComplex CComplex::operator -(CComplex& p)
{
	int tmx, tmy;

	tmx = x - p.x;
	tmy = y - p.y;

	return CComplex(tmx, tmy);
}
CComplex CComplex::operator *(CComplex& p)
{
	int tmx, tmy;

	tmx = x * p.x - y * p.y;
	tmy = x * p.y + p.x * y;

	return CComplex(tmx, tmy);
}
CComplex CComplex::operator /(CComplex& p)
{
	double tmx, tmy;

	tmx = (x * p.x + y * p.y) / (p.x * p.x + p.y * p.y);
	tmy = (y * p.x - x * p.y) / (p.x * p.x + p.y * p.y);

	//���ڴ� (x+yi)(p.x-p.yi)
	//�и�� px^ + py^

	return CComplex(tmx, tmy);
}