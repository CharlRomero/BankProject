#pragma once
#if !defined(__Natural_h)
#define __Natural_h
#include "Person.h"
class NaturalClient : public Person {
public:
	//string id, string name, string nacionality, string age
	NaturalClient(string id, string name, string nacionality, string age) : Person(id, name, nacionality, age) {}
	NaturalClient() : Person() {}
	~NaturalClient() {}	
	virtual void readDatas() {

		InputData<string> enter;
		InputData<Date> enterDate;
		setName(enter.data("Ingrese su nombre: "));
		setLastName(enter.data("Ingrese su apellido: "));
		setId(enter.CI("Ingrese su cedula: "));
		setNacionality(enter.data("Ingrese su nacioalidad: "));
		setAge(enterDate.date("----------------------------------\nIngrese su fecha de nacimiento\n----------------------------------\n").calcAge());
	}
};
#endif
