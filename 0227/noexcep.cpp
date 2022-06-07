#include<stdexcept>
#include<iostream>
#include<typeinfo>

void CopyObject(const char* original) {	
	if (nullptr == original) {
		throw std::runtime_error("CopyObject() �Լ��� �μ��� NULL�̴�.");
	}
	std::cout << original << std::endl;
}
void MyFunc(char* name)noexcept {
	bool ok = noexcept(CopyObject(name));
	std::cout << std::boolalpha << "CopyObject() noexcept? " << ok << std::endl;
	//if (ok)
		CopyObject(name);
}

int main() {
	char* name = nullptr;
	try {
		MyFunc(name);
	}catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (int e) {
		std::cerr << e << std::endl;
	}
	catch (...) {
		std::cerr << "��� exception ó��." << std::endl;
	}
	return 0;
}