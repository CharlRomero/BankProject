#include "Person.h"

Person::Person(Account account, string name, string id, string nacionality, int age) {
	this->account = account;
	this->name = name;
	this->id = id;
	this->nacionality = nacionality;
	this->age = age;
}

Person::Person() { this->name = ""; this->id = ""; this->nacionality = ""; this->age = 0; }
Person::~Person(){}

string Person::getName() { return name; }
void Person::setName(string name) { this->name = name; }

string Person::getId() { return id; }
void Person::setId(string id) { this->id = id; }

string Person::getNacionality() { return nacionality; }
void Person::setNacionality(string nacionality) { this->nacionality = nacionality; }

int Person::getAge() { return age; }
void Person::setAge(int age) { this->age = age; }