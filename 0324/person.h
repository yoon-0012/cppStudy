#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include <cassert>
#include "person.h"
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string, int); // Parameter constructor
    Person();
    Person(const Person&); // Copy constructor
    ~Person();
    void setName(string);
    void setAge(int);
    string getName()const;
    int getAge()const;
};
#endif
