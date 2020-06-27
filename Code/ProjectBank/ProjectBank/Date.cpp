#include "Date.h"
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