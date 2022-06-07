#include<iostream>
#include <random>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid;

void set(int[], int[], int[],int&,int&);

int main()
{
	int fir[20];
	int sec[20];
	int thi[20];
	int even = 0;
	int odd = 0;

	for (int i = 0; i < 20; ++i)
		fir[i] = uid(dre) % 100 + 1;

	set(fir, sec, thi,even,odd);

	cout << "원 배열 출력: " << endl;
	for (int i = 0; i < 20; ++i)
		cout << fir[i] << " ";
	cout << endl;

	cout << "짝수 배열 출력: " << endl;
	for (int i = 0; i < even; ++i)
		cout << sec[i] << " ";
	cout << endl;

	cout << "홀수 배열 출력: " << endl;
	for (int i = 0; i < odd; ++i)
		cout << thi[i] << " ";
	cout << endl;
}

void set(int arr[], int Even[], int Odd[],int& eve,int& od)
{
	for (int i = 0; i < 20; ++i)
	{
		if (arr[i] % 2 == 0)
			Even[eve++] = arr[i];
		else
			Odd[od++] = arr[i];
	}
}