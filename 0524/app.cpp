#include"Complex.h"

int main()
{
    CComplex p1 = { 1, 3 };
    CComplex p2(2, 4);

    p2 += p1;
    p2.print();

    p2 -= p1;
    p2.print();

    p2 *= p1;
    p2.print();

    p2 /= p1;
    p2.print();
}
