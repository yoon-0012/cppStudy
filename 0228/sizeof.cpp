#include<iostream>
struct Bit { unsigned char bit : 1; };
size_t size(int* p)
{
	std::cout << "size() �Լ� �� �迭�� �޸� ũ��\t: " << sizeof(*p) << std::endl;
	return sizeof(p) / sizeof(*p);
}

int main()
{
	Bit bit;
	int arr[20];

	std::cout << "main() �Լ� �� Bit ����ü�� ũ��\t: " << sizeof(Bit) << '\n'
		<< "main() �Լ� �� �迭�� �޸� ũ��\t: " << sizeof(arr) << '\n';
	size_t i = size(arr);
	std::cout << "�迭�� ũ�� : " << (sizeof(arr) / sizeof(arr[0]))
		<< ", size() �Լ��� ��ȯ���� ũ�� : " << i << std::endl;

	return 0;
}