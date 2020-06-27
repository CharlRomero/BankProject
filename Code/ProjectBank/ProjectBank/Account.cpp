#include "Account.h"
#include "Person.h"
#include "InputData.h"
#include <string> 
Account::Account(string numAccount, int typeAccount) { this->numAccount = numAccount; this->typeAccount = typeAccount; }
Account::Account() { this->numAccount = ""; this->typeAccount = 0; }
Account::~Account() {}

int Account::getTypeAccount() { return typeAccount; }
void Account::setTypeAccount(int type) { this->typeAccount = type; }
string Account::getNumAccount() { return numAccount; }
void Account::setNumAccount(string numAccount) { this->numAccount = numAccount; }
string Account::createNumAccount(int type, string numci) {
	this->setTypeAccount(type);
	string digit;
	if (this->typeAccount == 11)
	{	
		 digit = to_string(this->typeAccount);
	}
	if (this->typeAccount ==22)
	{
		 digit = to_string(this->typeAccount);
	}
	return digit + numci;
}
void Account::readDates(int typAccnt)
{
	InputData<string> putDates;
	this->setTypeAccount(typAccnt);
	this->setNumAccount(putDates.readString( typAccnt));
}
