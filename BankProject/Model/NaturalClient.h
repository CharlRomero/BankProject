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
	this->setlastName(putDates.readString("Ingrese su apellido: "));
	this->setId(putCI.CI("Ingrese su cedula: "));
	this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
	cout << "Fecha de nacimiento" << endl;
	do {
		this->day = atoi(putDates.integer("Ingrese el dia de nacimiento: ").c_str());
	} while (day < 1 || day > 31);
	do {
		this->month = atoi(putDates.integer("Ingrese el mes de nacimiento: ").c_str());
	} while (month < 1 || month > 12);
	do {
		this->year = atoi(putDates.integer("Ingrese el anio de nacimiento: ").c_str());;
	} while (year < 2002 || year > 2021);
}
#endif
