#pragma once
/***********************************************************************
 * Module:  Acocount.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:41:09
 * Purpose: Declaration of the class Acocount
 ***********************************************************************/

#if !defined(__ModeloBancario_Acocount_h)
#define __ModeloBancario_Acocount_h

#include <iostream>

using namespace std;

class Account {
public:
    Account(string, int);
    Account();
    ~Account();
    string getNumAccount(void);
    void setNumAccount(string newNumAccount);
    string createNumAccount(void);

protected:
private:
    string numAccount;
    int typeAccount;
};
#endif
