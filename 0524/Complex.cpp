#include "Complex.h"

CComplex::CComplex(int x_, int y_) 
{
    x = x_;
    y = y_;
}

void CComplex::print()
{
    cout << x << " + " << y << "i" << endl;
}

//
CComplex CComplex::operator += (CComplex& p)
{
    x = x + p.x;
    y = y + p.y;

    return CComplex(x, y);
}
CComplex CComplex::operator -= (CComplex& p)
{
    x = x - p.x;
    y = y - p.y;

    return CComplex(x, y);
}
CComplex CComplex::operator *= (CComplex& p)
{
    int tmp = x;

    x = x * p.x - y * p.y;
    y = tmp * p.y + p.x * y;

    return CComplex(x, y);
}
CComplex CComplex::operator /= (CComplex& p)
{
    int tmp = x;

    x = (x * p.x + y * p.y) / (p.x * p.x + p.y * p.y);
    y = (y * p.x - tmp * p.y) / (p.x * p.x + p.y * p.y);

    //분자는 (x+yi)(p.x-p.yi)
    //분모는 px^ + py^

    return CComplex(x, y);
}