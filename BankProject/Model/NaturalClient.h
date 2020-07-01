#if !defined(__Natural_h)
#define __Natural_h
#include "Person.h"
class NaturalClient : public Person {
public:
	//Constructors string id, string name, string nacionality, string age
	NaturalClient (string id, string name, string nacionality, string age) : Person (id, name, nacionality, age) {}
	NaturalClient () : Person() {}
	//Destroyer
	~NaturalClient() {}	
	/*void readDates() {
		InputData<int> putDates;
		InputData<string> putCI;
		this->setName(putDates.readString("Ingrese su nombre: "));
		this->setId(putCI.CI("Ingrese su cedula: "));
		this->setNacionality(putDates.readString("Ingrese su nacioalidad: "));
		this->setAge(atoi(putDates.positiveInteger("Ingrese su edad: ").c_str()));
	}*/
};
#endif