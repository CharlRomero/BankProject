***********************************************************************
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
	int getAge(void);
	void setAge(int);
	virtual void readDates()=0;
protected:
	string name;
	string nacionality;
	int age;
};
Person::Person(string name, string nacionality, int age) {
	this->name = name;
	this->nacionality = nacionality;
	this->age = age;
}

Person::Person() { this->name = ""; this->nacionality = ""; this->age = 0; }
Person::~Person() {}

string Person::getName() { return name; }
void Person::setName(string name) { this->name = name; }



string Person::getNacionality() { return nacionality; }
void Person::setNacionality(string nacionality) { this->nacionality = nacionality; }

int Person::getAge() { return age; }
void Person::setAge(int age) { this->age = age; }

void Person::readDates()
{
	InputData<int> putDates;
	InputData<string> putCI;
	this->setName(putDates.readString("Ingrese su nombre: "));
}
#endif
