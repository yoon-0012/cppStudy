#include "person.h"


Person::Person(string yourName, int yourAge)
	:name(yourName),age(yourAge)
{
	if (age< 1||name=="")
		assert(false);
}
Person::Person()
	: name(" "),age(1)
{
}
Person::Person(const Person& person)
	: name(person.name),age(person.age)
{
}
Person :: ~Person()
{
}

void Person::setName(string yourName) 
{
	name = yourName;
	if(name=="")
		assert(false);
}
void Person::setAge(int yourAge)
{
	age = yourAge;
	if (age < 1)
		assert(false);
}
string Person::getName()const
{
	return name;
}
int Person::getAge()const
{
	return age;
}
