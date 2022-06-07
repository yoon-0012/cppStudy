#include<iostream>
#include<iomanip>
#include<locale>

void showDate(int m, int d, int y) {
	std::cout << std::setfill('0');

	std::cout << std::setw(2) << m << '/'
		<< std::setw(2) << d << '/'
		<< std::setw(4) << y << std::endl;
}

int main() {
	double x = 800000.0 / 81.0;

	std::cout << std::fixed << std::setprecision(2) << x << std::endl;
	x = 2.0 / 3.0;

	std::cout << std::fixed << std::setprecision(4) << x << std::endl;
	std::cout << std::endl;

	showDate(1, 1, 2019);

	unsigned long x0 = 64206;

	std::cout << x0 << std::showbase
		<< " 8������ \"" << std::oct << x0 << "\""
		<< " 16������ \"" << std::hex << x0 << "\"" << std::endl;

	return 0;
}