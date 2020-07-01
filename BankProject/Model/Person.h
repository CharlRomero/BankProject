/***********************************************************************
 * Module:  Person.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:37:31
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Person_h)
#define __Person_h
#include "Account.h"
#include <iostream>
#include"InputData.h"
using namespace std;
class Person {
public:
	Person(string, string, int);
	Person();
	~Person();
	string getName(void);
	void setName(string);

	string getNacionality(void);
	void setNacionality(string);

	string getlastName(void);
	void setlastName(string);
	int getYear(void);
	void setYear(int);
	int getDay(void);
	void setDay(int);
	int getMonth(void);
	void setMonth(int);
	virtual void readDates()=0;
protected:
	string name;
	string nacionality;
	string lastName;
	int day;
	int month;
	int year;
};
Person::Person(string name, string nacionality, int age) {
	this->name = name;
	this->nacionality = nacionality;
}

Person::Person() { this->name = ""; this->nacionality = ""; this->year = 0; }
Person::~Person() {}

string Person::getName() { return name; }
void Person::setName(string name) { this->name = name; }



string Person::getNacionality() { return nacionality; }
void Person::setNacionality(string nacionality) { this->nacionality = nacionality; }

int Person::getDay() { return day; }
void Person::setDay(int dy) { this->day = dy; }

int Person::getMonth() { return month; }
void  Person::setMonth(int dy) { this->month = dy;}

int Person::getYear() { return year; }
void  Person::setYear(int dy) { this->year = dy; }


string Person::getlastName() { return lastName; }
void Person::setlastName(string named2) { this->lastName = named2; }

void Person::readDates()
{
	InputData<int> putDates;
	InputData<string> putCI;
	this->setName(putDates.readString("Ingrese su nombre: "));
}
#endif
