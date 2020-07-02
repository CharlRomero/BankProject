#pragma once
#if !defined(__Legal_h)
#define __Legal_h

class LegalClient : public Person
{
public:
	LegalClient(string ruc, string name, string lastName, string nacionality, Date date) : Person(name, lastName, nacionality, date) { this->ruc = ruc; }
	//LegalClient(string id, string name, string nacionality, Date date) : Person(id, name, nacionality, date) {}
	LegalClient(string ruc, string name, string lastName, string nacionality, string age, string numAccount) : Person(ruc, name, lastName, nacionality, age, numAccount) { this->ruc = ruc; }
	LegalClient() : Person() {}
	string getRUC() { return this->ruc; }
	void setRUC(string id) { this->ruc = id; }
	virtual void readDatas() {

		InputData<string> enter;
		InputData<Date> enterDate;
		cout << "----------------------------------\nCreacion de cuenta\n----------------------------------" << endl;
		cout << "Cliente Legal\n----------------------------------" << endl;
		this->setName(enter.data("Ingrese su nombre: "));
		this->setLastName(enter.data("Ingrese su apellido: "));
		this->setNacionality(enter.data("Ingrese su nacionalidad: "));
		this->setRUC(enter.ruc("Ingrese su RUC: "));
		this->setAge(enterDate.date("----------------------------------\nIngrese su fecha de nacimiento\n----------------------------------\n").calcAge());
		this->setNumAccount(account.createNumAccount(22, this->getRUC()));
		cout << "Su numero de cuenta es: " + this->getNumAccount() << endl;
	}
private:
	string ruc;
	Account account;
};
#endif
