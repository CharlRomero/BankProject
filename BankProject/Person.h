#pragma once
/***********************************************************************
 * Module:  Person.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:37:31
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__ModeloBancario_Person_h)
#define __ModeloBancario_Person_h

#include <iostream>

using namespace std;

class Person {
public:
    Person(string,string,string,int);
    Person();
    ~Person();
    string getName(void);
    void setName(string newName);
    string getId(void);
    void setId(string newID);
    string getNacionality(void);
    void setNacionality(string newNacionality);
    int getAge(void);
    void setAge(int newAge);

protected:
private:
    string name;
    string id;
    string nacionality;
    int age;
};
#endif
