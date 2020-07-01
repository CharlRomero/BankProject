#pragma once
#if !defined(__Legal_h)
#define __Legal_h
#include "Person.h"
class LegalClient :public Person
{
public:
	LegalClient() {}
	string getRUC() { return this->ruc; }
	void setRUC(string id) { this->ruc = id; }
	virtual void readDatas() {

		InputData<string> enter;
		InputData<Date> enterDate;

		setName(enter.data("Ingrese su nombre: "));
		setLastName(enter.data("Ingrese su apellido: "));
		setNacionality(enter.data("Ingrese su nacionalidad: "));
		setId(enter.CI("Ingrese su cedula: "));
		setAge(enterDate.date("----------------------------------\nIngrese su fecha de nacimiento\n----------------------------------\n").calcAge());
		setRUC(enter.ruc("Ingrese su RUC: "));
	}
private:
	string ruc;
};
#endif
