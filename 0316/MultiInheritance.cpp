#include<iostream>

class Object
{
public:
	virtual bool Equals(Object& other)
	{
		std::cout << "Object->Equal()" << std::endl;
		return this == &other;
	}
	
	std::string name;
};

class Rectangle :virtual public Object
{
public:
	Rectangle():Object(){}

	virtual bool Equals(Rectangle& other)
	{
		std::cout << "Rectangle->Equals" << std::endl;
		return this == &other;
	}
};

class Clickable :virtual public Object
{
public:
	Clickable():Object(){}

	virtual bool Equals(Clickable& other)
	{
		std::cout << "Clickable->Equals()" << std::endl;
		return this == &other;
	}
};

class Button :public Rectangle, public Clickable
{
public:
	Button() :Rectangle(), Clickable(){}

	virtual bool Equals(Button& other)final
	{
		std::cout << "Button->Equals()" << std::endl;
		return this == &other;
	}
};

int main()
{
	Button button; 
	Button b2;

	button.name = "Button";
	std::cout << std::boolalpha;
	std::cout << "button.Equals(button) = " << button.Equals(button) << std::endl;
	std::cout << "button.Equals(b2) = " << button.Equals(b2) << std::endl;
}