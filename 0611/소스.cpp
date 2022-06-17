#include<iostream>
#include <windows.h>
using namespace std;
#pragma comment(lib, "Winmm.lib")

int main()
{
	int time= ::timeGetTime();

	cout << time << endl;
}