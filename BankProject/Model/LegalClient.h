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
	this->setlastName(putDates.readString("Ingrese su apellido: "));
	this->setRUC(putCI.CI("Ingrese su RUC: "));
	this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
	cout << "Fecha de nacimiento"<< endl;
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
