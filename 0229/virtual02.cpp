#include<iostream>
#include<string>

class Shape
{
public:
	Shape(std::string n):name(n){}
	void GetArea()
	{
		std::cout << "���� �̸� ; " << GetName()
			<< ",\t ���� ũ�� : " << Area() << std::endl;
	}

	virtual double Area() { return 0; }
	std::string GetName()
	{
		return name;
	}

private:
	std::string name;
};

class Rectangle : public Shape
{
public:
	Rectangle(std::string n, float w = 0, float h = 0):Shape(n),width(w),height(h){}

	double Area()
	{
		return (width * height);
	}

protected:
	float width;
	float height;
};

class Triangle : public Rectangle
{
public:
	Triangle(float w = 0, float h = 0) :Rectangle("�ﰢ��", w, h) {};

	virtual double Area()final { return (Rectangle::Area() / 2); }
};

const double PI = 3.14159;

class Circle :public Shape
{
public:
	Circle(double r=0):Shape("��"),radius(r){}

	double Area() override { return (PI * (radius * radius)); }

protected:
	double radius;
};

int main()
{
	Shape* shape[] =
	{
		new Rectangle("���簢��",10,5),
		new Triangle(10,5),
		new Circle(10)
	};

	for (Shape* s : shape)
		s->GetArea();

	Rectangle r("���簢��-2", 10, 15);
	Shape s = r;

	s.GetArea();

	for (Shape* s : shape)
		delete s;

	return 0;
}