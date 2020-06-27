/***********************************************************************
 * Module:  Person.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:37:31
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Person_h)
#define __Person_h
//#include "Account.h"
#include <iostream>

using namespace std;
class Person {
public:
	Person(string, string, string, int);
	Person();
	~Person();
	string getName(void);
	void setName(string);
	string getId(void);
	void setId(string);
	string getNacionality(void);
	void setNacionality(string);
	int getAge(void);
	void setAge(int);
	void readDates();
	
private:
	string name;
	string id;
	string nacionality;
	int age;
};
#endif