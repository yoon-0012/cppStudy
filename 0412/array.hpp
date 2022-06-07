#include "array.h"

template<typename T>
Array<T>::Array(T data) :arr{ nullptr },size {}, capacity{5}
{
	this->arr = new T;
	*arr = data;
	++size;
}
template<typename T>
Array<T>::~Array()
{
	delete arr;
}

template<typename T>
void Array<T>::insert(T data)
{
	if (size < capacity)
	{
		*(arr + size) = data;
		++size;
	}
	else
		cout << "�迭�� �� ���� ��Ҹ� �߰��� �� �����ϴ�!" << endl;
}
template<typename T>
void Array<T>::print()
{
	for (int i=0;i<size;++i)
		cout << *(arr+i)<<'\t';
	cout << endl;
}

