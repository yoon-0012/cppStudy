#include<iostream>

enum Days{Sunday = 0, Monday = Sunday+1,Tuesday,Wednesday,Thursday,Friday,Saturday=Sunday+6};
enum class Months:short{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};	
const char* week[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };

const char* DayName(Days day)
{
	if (day<Sunday || day>Saturday)
		return "알수없는 주";

	return week[day];
}

int main()
{
	Months thisMonth = Months::Dec;
	Days today = static_cast<Days>(thisMonth);
	std::cout << DayName(today) << "는 " << today + 1 << "번째 요일이다." << std::endl;

	Months nextMonth = (Months)((short)Months::Dec - 12 + 1);
	today = static_cast<Days>(nextMonth);
	std::cout << DayName(today) << "는 " << today + 1 << "번째 요일이다."<<std::endl;

	float one = static_cast<float>(today);
	std::cout << DayName(today) << "는 " << one + 1 << "번째 요일이다." << std::endl;
}