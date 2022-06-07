#include<iostream>
#include <cassert>
#include<cmath>
using namespace std;
class Triangle
{
    float firstSide, secondSide, thirdSide;

public:
    Triangle(float fir, float sec, float thi) :firstSide{ fir }, secondSide{ sec }, thirdSide{ thi }
    {
        float temp;

        while (firstSide>secondSide||firstSide>thirdSide||secondSide>thirdSide)
        {
            if (firstSide > secondSide)
            {
                temp = firstSide;
                firstSide = secondSide;
                secondSide = temp;
            }
            if (firstSide > thirdSide)
            {
                temp = firstSide;
                firstSide = thirdSide;
                thirdSide = temp;
            }
            if (secondSide > thirdSide)
            {
                temp = secondSide;
                secondSide = thirdSide;
                thirdSide = temp;
            }
        }
        if (firstSide + secondSide <= thirdSide)
            assert(false);
    }
    float getSides(int choose)const
    {
        if (choose == 1)
            return firstSide;
        else if (choose == 2)
            return secondSide;
        else  if (choose == 3)
            return thirdSide;
        else return 0;
    }
    float getPerimeter()const
    {
        float perimeter = firstSide + secondSide + thirdSide;
        return perimeter;
    }
    float getArea()const
    {
        float area = sqrt((getPerimeter() / 2)
            * (getPerimeter() / 2 - firstSide) * (getPerimeter() / 2 - secondSide) * (getPerimeter() / 2 - thirdSide));
        return area;
    }
};

int main()
{
    Triangle tr{ 30,10,25 };
    int check = 0;
    int num = 0;

    cout << "1.���� ���� ���" << endl;
    cout << "2.�ѷ� ���" << endl;
    cout << "3.���� ���" << endl;
    cin >> check;
    switch (check)
    {
    case 1:
        cout << "����� ���� ��ȣ �Է�: ";
        cin >> num;
        cout << tr.getSides(num) << endl;
        break;
    case 2:
        cout << tr.getPerimeter() << endl;
        break;
    case 3:
        cout << tr.getArea() << endl;
        break;
    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        break;
    }
}