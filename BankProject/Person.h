#if !defined(__Person_h)
#define __Person_h

#include "Account.h"
#include <iostream>
#include "Date.h"

using namespace std;
class Person {
public:
	Person(string name, string nacionality, string age, Date date) {
		this->name = name;
		this->nacionality = nacionality;
		this->age = date.calcAge();
	}
	Person() { this->name = ""; this->nacionality = ""; this->age = ""; }
	~Person() {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }

	string getNacionality() { return nacionality; }
	void setNacionality(string nacionality) { this->nacionality = nacionality; }
	string getAge() { return age; }
	void setAge(string age) { this->age = age; }
	//virtual void readDates()=0;
protected:
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
