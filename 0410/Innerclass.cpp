#include<iostream>
#include<cstring>

class Enclose
{
	class Nested
	{
	public:
		Nested(std::string n):name(n){}
		void g()
		{
			std::cout << "Enclose Ŭ���� ���� Ŭ������ "
				<< name.c_str() << std::endl;
		}
	
	private:
		std::string name;
	};

public:
	static Nested f(std::string n) { return Nested{ n }; }
};

int main()
{
	Enclose::f("ȣ�� ���").g();

	auto n2=Enclose::f("���� ���");
	n2.g();
}