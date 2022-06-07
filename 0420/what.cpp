#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	// Creation of a string
	char str[] = "Hello friends of mine.";
	// Finding the first occurance of any character in a set 
	char* pPtr = strpbrk(str, "pfmd");
	cout << "The character " << *pPtr << " was found." << endl;
	cout << "It is at index: " << pPtr;
	return 0;
}