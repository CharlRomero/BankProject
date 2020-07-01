#if !defined(__Person_h)
#define __Person_h

#include "Account.h"
#include <iostream>
#include "..\Date.h"

using namespace std;
class Person {
public:
	//Constructors
	Person(string id, string name, string nacionality, string age, Date date) {
		this->id = id;
		this->name = name;		
		this->nacionality = nacionality;
		this->age = date.calcAge();
	}
	Person(string id, string name, string nacionality, string age) {
		this->id = id;
		this->name = name;
		this->nacionality = nacionality;
		this->age = age;
	}
	Person() { this->name = ""; this->nacionality = ""; this->age = ""; }
	//Destroyer
	~Person() {}
	//Getter and setter of id
	string getId() { return id; }
	void setId(string id) { this->id = id; }
	//Getter and setter of name
	string getName() { return name; }
	void setName(string name) { this->name = name; }
	//Getter and setter of nacionality
	string getNacionality() { return nacionality; }
	void setNacionality(string nacionality) { this->nacionality = nacionality; }
	//Getter and setter of age
	string getAge() { return age; }
	void setAge(string age) { this->age = age; }	
	//virtual void readDates()=0;
protected:
	string id;
	string name;
	string nacionality;
	string age;
};
//void Person::readDates()
//{
//	InputData<int> putDates;
//	InputData<string> putCI;
//	this->setName(putDates.readString("Ingrese su nombre: "));
//}
#endif
