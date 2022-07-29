#include<iostream>
#include<typeinfo>

class Base
{
	int state;

public:
	Base():state(0){}
	Base(int i):state(i){}
	virtual int dummy()
	//virtual void dummy()
	{
		std::cout << "Base dummy() ȣ��.\n";
		return state;
	}
};

class Derived :public Base
{
public:
	Derived(int i):Base(i){}
	void SetNumber(int i)
	{
		number = i;
	}

	int number;
};

int main()
{
	Derived* pd;
	Base* pba = new Derived(23);

	pd = dynamic_cast<Derived*>(pba);//Base�� Derived��
	if (nullptr == pd)std::cout << "ù ��° pba ��ü�� ��ȯ�� �����Ͽ����ϴ�.\n";

	pd->SetNumber(10);
	std::cout << pd->number << std::endl;
	std::cout << pd->dummy() << std::endl;
	delete pba;

	Base* pbb = new Base(568);
	//Base* pbb = new Derived(568);
	pd = dynamic_cast<Derived*>(pbb);
	if (nullptr == pd)std::cout << "�� ��° pbb ��ü�� ��ȯ�� �����Ͽ����ϴ�.\n";

	pd = static_cast<Derived*>(pbb);
	pd->SetNumber(110);
	std::cout << pd->number << std::endl;
	std::cout << pd->dummy() << std::endl;
	delete pbb;
}