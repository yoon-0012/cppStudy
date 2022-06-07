#include"Complex.h"

int main()
{
    CComplex p1 = { 1, 3 };
    CComplex p2(2, 4);
    CComplex p3(0, 0);

    p1 += p2;
    p1.print();

    p1 -= p2;
    p1.print();

    p1 *= p2;
    p1.print();

    p1 /= p2;
    p1.print();

    p3 = p1 + p2;
    p3.print();

    p3 = p1 - p2;
    p3.print();

    p3 = p1 *p2;
    p3.print();

    p3 = p1 /p2;
    p3.print();
}
