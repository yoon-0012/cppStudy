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
		cout << "배열이 꽉 차서 요소를 추가할 수 없습니다!" << endl;
}
template<typename T>
void Array<T>::print()
{
	for (int i=0;i<size;++i)
		cout << *(arr+i)<<'\t';
	cout << endl;
}

