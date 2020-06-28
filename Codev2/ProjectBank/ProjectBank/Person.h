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
	Person(string, string, string, int);
	Person();
	~Person();
	string getName(void);
	void setName(string);
	string getId(void);
	void setId(string);
	string getNacionality(void);
	void setNacionality(string);
	int getAge(void);
	void setAge(int);
	void readDates();
	
private:
	string name;
	string id;
	string nacionality;
	int age;
};
Person::Person(string name, string id, string nacionality, int age) {
	this->name = name;
	this->id = id;
	this->nacionality = nacionality;
	this->age = age;
}

Person::Person() { this->name = ""; this->id = ""; this->nacionality = ""; this->age = 0; }
Person::~Person() {}

string Person::getName() { return name; }
void Person::setName(string name) { this->name = name; }

string Person::getId() { return id; }
void Person::setId(string id) { this->id = id; }

string Person::getNacionality() { return nacionality; }
void Person::setNacionality(string nacionality) { this->nacionality = nacionality; }

int Person::getAge() { return age; }
void Person::setAge(int age) { this->age = age; }

void Person::readDates()
{
	InputData<int> putDates;
	InputData<string> putCI;
	this->setName(putDates.readString("Ingrese su nombre: "));
	this->setId(putCI.CI("Ingrese su cedula: "));
	this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
	this->setAge(atoi(putDates.positiveInteger("Ingrese su edad: ").c_str()));
}
#endif