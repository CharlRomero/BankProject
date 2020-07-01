#if !defined(__Legal_h)
#define __Legal_h
#include "Person.h"
class LegalClient : public Person {
public:
	//Constructors
	LegalClient(string id, string name, string nacionality, string age): Person(id, name, nacionality, age) {}
	LegalClient(string id, string name, string nacionality, string age, string ruc) : Person(id, name, nacionality, age) { this->ruc = ruc; }
	LegalClient(string ruc) { this->ruc = ruc; }
	LegalClient() : Person() {}
	//Destroyer
	~LegalClient() {}
	string getRUC() { return this->ruc; }
	void setRUC(string id) { this->ruc = id; }
	/*void readDates() {
		InputData<int> putDates;
		InputData<string> putCI;
		this->setName(putDates.readString("Ingrese su nombre: "));
		this->setRUC(putCI.CI("Ingrese su RUC: "));
		this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
		this->setAge(atoi(putDates.positiveInteger("Ingrese su edad: ").c_str()));
	}*/
private:
	string ruc;
};
#endif
