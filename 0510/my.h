#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    float gpa;
    int capacity;
    class Course
    {
    public:
        Student* v;

        Course(int );
        ~Course();
        void getAllInfo(int);
    };

    void getInfo();
};