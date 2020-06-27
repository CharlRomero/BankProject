/***********************************************************************
 * Module:  Acocount.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:41:09
 * Purpose: Declaration of the class Acocount
 ***********************************************************************/

#if !defined(__Acocount_h)
#define __Acocount_h

#include <iostream>
#include "Person.h"
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
#endif