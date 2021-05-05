#include <iostream>
#include <string>

using namespace std;

class Date
{
public:
	Date(unsigned int year, unsigned int month, unsigned int day);
	Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
	void setYear(unsigned int year);
	void setMonth(unsigned int month);
	void setDay(unsigned int day);
	void setDate(unsigned int year, unsigned int month, unsigned int day);
	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;
	string getDate() const; // returns the date in format "yyyy/mm/dd"
	void show() const; // shows the date on the screen in format "yyyy/mm/dd"
	bool isValid();
	bool isEqualTo(const Date& date);
	bool isNotEqualTo(const Date& date);
	bool isAfter(const Date& date);
	bool isBefore(const Date& date);
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
	unsigned int num_days(unsigned int y, unsigned int m);
	inline bool is_leap_year(unsigned long  year) { return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 100 == 0));}
};

Date::Date(unsigned int year, unsigned int month, unsigned int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string yearMonthDay) {
	year = stoi(yearMonthDay.substr(0, 4));
	month = stoi(yearMonthDay.substr(5, 2));
	day = stoi(yearMonthDay.substr(8, 2));
}

void Date::setYear(unsigned int year) {
	this->year = year;
}

void Date::setMonth(unsigned int month) {
	this->month = month;
}

void Date::setDay(unsigned int day) {
	this->day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

unsigned int Date::getYear() const {
	return year;
}

unsigned int Date::getMonth() const {
	return month;
}

unsigned int Date::getDay() const {
	return day;
}

string Date::getDate() const {
	return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
}

void Date:: show() const {
	cout << to_string(year) <<"/" <<to_string(month) <<"/" <<to_string(day) << endl;
}

unsigned int Date::num_days(unsigned int y, unsigned int m) {
	switch (m) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31; break;
	case 2: if (is_leap_year(y)) return 29;
		  else return 28;
		break;
	case 4: case 6: case 9: case 11: return 30; break;
	default: return 0; break;
	}
}

bool Date::isValid(){
	if ((0 <= day && day <= num_days(year, month)) && month <=12) return true;
	else return false;
}
bool Date::isEqualTo(const Date& date) {
	if (day == date.getDay() and month == date.getMonth() and year == date.getMonth()) return true;
	else return false;
}
bool Date::isNotEqualTo(const Date& date) {
	if (day == date.getDay() and month == date.getMonth() and year == date.getMonth()) return false;
	else return true;
}
bool Date::isAfter(const Date& date) {
	if (year > date.getYear())return true;
	else if (year == date.getYear() and month > date.getMonth()) return true;
	else if (year == date.getYear() and month == date.getMonth() and day > date.getDay()) return true;
	else return false;
}
bool Date::isBefore(const Date& date) {

}
int main() {
	Date hoje(2020, 05, 05);
	hoje.show();
	Date amanha("2021/05/06");
	amanha.show();
	amanha.setDay(02);
	amanha.show();
	hoje.setDate(2001, 05, 31);
	hoje.show();
	hoje.setYear(2003);
	hoje.show();
	hoje.setMonth(12);
	hoje.show();
	string x = hoje.getDate();
	cout << "x=" + x << endl;
	bool y = hoje.isValid();
	cout << y << endl;


}