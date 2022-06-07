#include<iostream>
#include<iomanip>

int main(int argc, char* argv[], char* const envp[]) {
	for (int i = 0; i < argc; ++i)
		std::cout << i << " : " << argv[i] << '\n';

	// 환경 변수는 포인터의 주소를 증가시키면서 내용을 출력시킨다.
	while (*envp)
		std::cout << *envp++ << std::endl;

	return 0;
}