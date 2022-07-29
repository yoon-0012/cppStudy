#include<iostream>

struct foo
{
	foo(int v)
	{
		theValue = v;
	}

	const int& get() const
	{
		return theValue;
	}

	int& get()
	{
		return const_cast<int&>(static_cast<const foo&>(*this).get());
	}

private:
	int theValue;
};

int main()
{
	foo f(100);

	int& original = f.get();
	std::cout << "������ original = " << f.get() << std::endl;

	original = 23;
	std::cout << "������  original = " << f.get() << std::endl;
}