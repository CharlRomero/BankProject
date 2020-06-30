#pragma once
#if !defined(__Natural_h)
#define __Natural_h
#include "Person.h"
class Natural : public Person
{
public:
	Natural();
	string getId(void);
	void setId(string);
	void readDates();
private:
	string id;
};

Natural::Natural() { }
string Natural::getId() { return id; }
void Natural::setId(string id) { this->id = id; }
void Natural::readDates()
{
	InputData<int> putDates;
	InputData<string> putCI;
	this->setName(putDates.readString("Ingrese su nombre: "));
	this->setId(putCI.CI("Ingrese su cedula: "));
	this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
	this->setAge(atoi(putDates.positiveInteger("Ingrese su edad: ").c_str()));
}
#endif