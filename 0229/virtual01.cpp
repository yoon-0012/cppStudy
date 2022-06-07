#include<iostream>
#include<string>

class Shape
{
public:
	Shape(std::string n):name(n){}

	void GetArea()
	{
		std::cout << "Shape->���� �̸� : " << GetName()
			<< ",\t ���� ũ�� : " << Area() << std::endl;
	}

	double Area() { return 0; }

	std::string GetName()
	{
		return name;
	}

private:
	std::string name;
};

class Rectangle :public Shape
{
public:
	Rectangle(std::string n,float w=0,float h=0):Shape(n),width(w),height(h){}
	
	double Area()const
	{
		return (width * height);
	}

	void GetArea()
	{
		std::cout << "Rectangle->���� �̸� : " << GetName()
			<< ", ���� ũ�� : " << Area() << std::endl;
	}

protected:
	float width;
	float height;
};

int main()
{
	Shape* s = new Rectangle("���簢��", 10, 5);
	s->GetArea();
	
	Rectangle* r = (Rectangle*)s;
	r->GetArea();
	delete s;

	return 0;
}