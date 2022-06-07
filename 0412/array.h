#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template<typename T>
class Array
{
	int capacity;
	int size;
	T* arr;

public:
	Array(T);
	~Array();

	void insert(T);
	void print();
};

#include "array.hpp"
#endif 

