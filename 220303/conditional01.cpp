#include<iosteram>
#include<type_traits>	
#include<typeinfo>

template<typename T1,typename T2>
typename std::enable_if<std::is_same<T1,T2>::value,bool>::type
check_type(const T1& t1, const T2& t2)
{
	std::cout << t1 << "�� " << t2 << "�� ���� Ÿ���̴�." << std::endl;
	return true;
}

template<typename T1, typename T2>
typename std::enable_if<!std::is_same<T1, T2>::value, bool>::type
check_type(const T1& t1, const T2& t2)
{
	std::cout << t1 << "�� " << t2 << "�� ���� �ٸ� Ÿ���̴�." << std::endl;
	return false;
}

int main()
{
	check_type(10, 40);
	check_type(10, 40.56);
	check_type(10, "Test Ÿ��");
}