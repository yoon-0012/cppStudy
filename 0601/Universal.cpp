#include<iostream>
int i = 0;

template<typename T>
void ParamCheck(T&& s)
{
	if (std::is_reference<T&&>::value)
	{
		if (std::is_lvalue_reference<T&&>::value)
			std::cout << ++i << ". " << s << " �μ��� 'T&' Ÿ���̴�.\n";
		else
			std::cout << ++i << ". " << s << " �μ��� 'T&&' Ÿ���̴�.\n";
	}
	else
		std::cout << ++i << ". " << s << " �μ��� 'T' Ÿ���̴�.\n";
}

int main(int argc, char** argv)
{
	ParamCheck("���ͷ�");
	
	ParamCheck(std::string{ "������" });

	std::string s3{ "�Ϲݺ���" };
	ParamCheck(s3);

	const std::string& s4{ "const ���" };
	ParamCheck(s4);

	std::string ss = std::string("std::move(") + s3 + std::string(")");
	std::string& s5{ ss };
	ParamCheck(std::move(s5));

	std::string&& s6 = std::string("���Կ����ڿ� ������");
	ParamCheck(s6);
	std::cout << std::endl;
}