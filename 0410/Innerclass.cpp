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
			std::cout << "Enclose 클래스 내부 클래스의 "
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
	Enclose::f("호출 방법").g();

	auto n2=Enclose::f("선언 방법");
	n2.g();
}