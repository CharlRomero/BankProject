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
#include "Account.h"

using namespace std;

class Person {
public:
    Person(Account, string, string, string, int);
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
    Account getAccount();
    void setAccount(Account);
private:
    string name;
    string id;
    string nacionality;
    int age;
    Account account;
};
#endif
