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

//22.05.24
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

	//분자는 (x+yi)(p.x-p.yi)
	//분모는 px^ + py^
}

//22.05.26
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

	//분자는 (x+yi)(p.x-p.yi)
	//분모는 px^ + py^

	return CComplex(tmx, tmy);
}