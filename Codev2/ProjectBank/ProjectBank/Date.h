#if !defined(__Menu_h)
#define __Date_h

#include <iostream>
#include "Account.h"

class Date : public Account {
public:
	Date(string, string, string);
	~Date();
	string getDay(void);
	void setDay(string newDay);
	string getMonth(void);
	void setMonth(string newMonth);
	string getYear(void);
	void setYear(string newYear);
	Date calcDate(void);

protected:
private:
	string day;
	string month;
	string year;
};
Date::Date(string day, string month, string year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
Date::~Date() {}

string Date::getDay() { return day; }
void Date::setDay(string day) { this->day = day; }

string Date::getMonth() { return month; }
void Date::setMonth(string month) { this->month = month; }

string Date::getYear() { return year; }
void Date::setYear(string year) { this->year = year; }

//Date Date::calcDate() {}
#endif
