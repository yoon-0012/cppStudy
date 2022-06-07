#include<iostream>

enum Days { Sunday = 0,Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday=6 };
enum class Months:short{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

const char* week[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };

const char* DayName(Days day)
{
	if (day<Sunday || day>Saturday)
		return "�˼����� ��";
	return week[day];
}

int main()
{
	Days today = Thursday;

	Days tomorrow = (Days)(Thursday + 1);

	std::cout << DayName(today) << "�� " << today + 1 << "��° �����̴�." << std::endl;
	std::cout << DayName(tomorrow) << "�� " << tomorrow + 1 << "��° �����̴�." << std::endl;

	today = (Days)(Saturday + Friday);
	std::cout << DayName(today) << "�� " << (int)today << "��° �����̴�." << std::endl;
	
	Months thisMonth = Months::Dec;
	Months nextMonth = (Months)((short)Months::Dec - 12 + 1);
	short monthNumber = (short)thisMonth;
	std::cout << "Dec ���� " << monthNumber << "��° ���̴�." << std::endl;
	std::cout << "Jan ���� " << (int)nextMonth << "��° ���̴�." << std::endl;

	return 0;
}