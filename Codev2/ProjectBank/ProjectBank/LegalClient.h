#pragma once
#if !defined(__Legal_h)
#define __Legal_h
#include "Person.h"
class Legal :public Person
{
public:
	Legal();
	string getRUC(void);
	void setRUC(string);
	void readDates();
private:
	string ruc;
};
Legal::Legal() { }
string Legal::getRUC() { return this->ruc; }
void Legal::setRUC(string id) { this->ruc = id; }
void Legal::readDates()
{
	InputData<int> putDates;
	InputData<string> putCI;
	this->setName(putDates.readString("Ingrese su nombre: "));
	this->setRUC(putCI.CI("Ingrese su RUC: "));
	this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
	this->setAge(atoi(putDates.positiveInteger("Ingrese su edad: ").c_str()));
}
#endif
