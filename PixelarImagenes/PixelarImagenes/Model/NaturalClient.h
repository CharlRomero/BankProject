#pragma once
#if !defined(__Natural_h)
#define __Natural_h

#include "Person.h"

class NaturalClient : public Person {
public:
	//string id, string name, string nacionality, string age
	//NaturalClient(string id, string name, string nacionality, string age) : Person(id, name, nacionality, age) {}
	NaturalClient(string id, string name, string nacionality, Date date) : Person(id, name, nacionality, date) {}
	//NaturalClient(string id, string name, string nacionality, string age, string numAccount) : Person(id, name, nacionality, age, numAccount) {}
	NaturalClient() : Person() {}
	~NaturalClient() {}	
	virtual void readDatas() {

		InputData<string> enter;
		InputData<Date> enterDate;
		InputData<float> enterSaldo;

		cout << "----------------------------------\nCreacion de cuenta\n----------------------------------" << endl;
		cout << "Cliente Natural\n----------------------------------" << endl;
		this->setName(enter.data("Ingrese su nombre: "));
		this->setLastName(enter.data("Ingrese su apellido: "));
		this->setId(enter.CI("Ingrese su cedula: "));
		this->setNacionality(enter.data("Ingrese su nacioalidad: "));
		this->setAge(enterDate.date("----------------------------------\nIngrese su fecha de nacimiento\n----------------------------------\n").calcAge());		
		this->setNumAccount(account.createNumAccount(11, this->getId()));
		cout << "Su numero de cuenta es: " + this->getNumAccount() << endl;

	}
private:
	Account account;
};
#endif
