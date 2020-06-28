/***********************************************************************
 * Module:  Acocount.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:41:09
 * Purpose: Declaration of the class Acocount
 ***********************************************************************/

#if !defined(__Acocount_h)
#define __Acocount_h

#include <iostream>
#include"InputData.h"
#include <string> 
using namespace std;

class Account {
public:

	Account(string, int);
	Account();
	~Account();
	string getNumAccount(void);
	void setNumAccount(string newNumAccount);
	int getTypeAccount();
	void setTypeAccount(int type);
	string createNumAccount(int, string);
	void readDates(int typAccnt);
private:
	string numAccount;
	int typeAccount;
};
Account::Account(string numAccount, int typeAccount) { this->numAccount = numAccount; this->typeAccount = typeAccount; }
Account::Account() { this->numAccount = ""; this->typeAccount = 0; }
Account::~Account() {}

int Account::getTypeAccount() { return typeAccount; }
void Account::setTypeAccount(int type) { this->typeAccount = type; }
string Account::getNumAccount() { return numAccount; }
void Account::setNumAccount(string newNumAccount) { this->numAccount = newNumAccount; }
string Account::createNumAccount(int type, string numci) {
	this->setTypeAccount(type);
	string digit;
	if (this->typeAccount == 11)
	{
		digit = to_string(this->typeAccount);
	}
	if (this->typeAccount == 22)
	{
		digit = to_string(this->typeAccount);
	}
	this->setNumAccount(digit + numci);
	cout << "Su nuevo numero de cuenta es: "<<this->getNumAccount()<< endl;
	return digit + numci;
}
void Account::readDates(int typAccnt)
{
	InputData<string> putDates;
	this->setTypeAccount(typAccnt);
	this->setNumAccount(putDates.readString(typAccnt));
}

#endif