#include "person.h"

int main()
{
	Person person1("������", 23);
	cout << "name: " << person1.getName() << endl;
	cout << "age: " << person1.getAge() << endl << endl;

	Person person2("��ä��", 23);
	cout << "name: " << person2.getName() << endl;
	cout << "age: " << person2.getAge() << endl << endl;

	Person person3("�����", 22);
	cout << "name: " << person3.getName() << endl;
	cout << "age: " << person3.getAge() << endl << endl;
}
