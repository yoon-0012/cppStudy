#include<iostream>

class MyClass
{
public:
	MyClass(const char* label, int id):label(label),id(id){}
	MyClass() = default;

	void DisplayX()
	{
		std::cout << "Ŭ���� �� label�� " << label.data()
			<< "�̰� id�� " << id << "�̴�.\n";
	}

private:
	std::string label;
	const int id = 3;
};

int main()
{
	MyClass s("cc", 3);
	s.DisplayX();

	return 0;
}