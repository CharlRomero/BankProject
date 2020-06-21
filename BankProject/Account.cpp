#include "Account.h"

Account::Account(string numAccount, int typeAccount) { this->numAccount = numAccount; this->typeAccount = typeAccount; }
Account::Account() { this->numAccount = ""; this->typeAccount = 0; }
Account::~Account() {}

string Account::getNumAccount() { return numAccount; }
void Account::setNumAccount(string numAccount) { this->numAccount = numAccount; }

string Account::createNumAccount() { return ""; }
