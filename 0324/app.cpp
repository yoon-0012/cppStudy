#include "person.h"

int main()
{
	Person person1("À±ÀºÁö", 23);
	cout << "name: " << person1.getName() << endl;
	cout << "age: " << person1.getAge() << endl << endl;

	Person person2("±èÃ¤¿ø", 23);
	cout << "name: " << person2.getName() << endl;
	cout << "age: " << person2.getAge() << endl << endl;

	Person person3("±è¹ÎÁÖ", 22);
	cout << "name: " << person3.getName() << endl;
	cout << "age: " << person3.getAge() << endl << endl;
}
