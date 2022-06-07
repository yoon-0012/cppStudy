#pragma once
#include <iostream>
using namespace std;

class CComplex
{
    int x, y;

public:
    CComplex(int, int); 
    void print(); 

    //
    CComplex operator += (CComplex&);
    CComplex operator -= (CComplex&);
    CComplex operator *= (CComplex&);
    CComplex operator /= (CComplex&);
};

