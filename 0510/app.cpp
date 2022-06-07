#include "my.h"

int main()
{
    int choose;
    string name;
    float gpa;

    cout << "몇 명의 학생들이 있습니까?  ";
    cin >> choose;
    Student::Course c(choose);


    for (int i = 0; i < choose; ++i)
    {
        cout << "이름: ";
        cin >> name;
        cout << "학점: ";
        cin >> gpa;

        c.v[i].name = name;
        c.v[i].gpa = gpa;
        c.v[i].capacity = choose;
    }

    c.getAllInfo(c.v[0].capacity);
}