#include "my.h"

int main()
{
    int choose;
    string name;
    float gpa;

    cout << "�� ���� �л����� �ֽ��ϱ�?  ";
    cin >> choose;
    Student::Course c(choose);


    for (int i = 0; i < choose; ++i)
    {
        cout << "�̸�: ";
        cin >> name;
        cout << "����: ";
        cin >> gpa;

        c.v[i].name = name;
        c.v[i].gpa = gpa;
        c.v[i].capacity = choose;
    }

    c.getAllInfo(c.v[0].capacity);
}