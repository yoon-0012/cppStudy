#include "array.h"

int main()
{
	Array<const char*> fir("hello");
	fir.print();
	fir.insert("im yoon");
	fir.print();
	fir.insert("today is");
	fir.insert("April 12!");
	fir.insert("and rainy day");
	fir.print();

	fir.insert("again");
	fir.print();
}
