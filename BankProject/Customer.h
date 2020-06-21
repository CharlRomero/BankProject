#pragma once
/***********************************************************************
 * Module:  CustumerType.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:19:53
 * Purpose: Declaration of the class CustumerType
 ***********************************************************************/

#if !defined(__ModeloBancario_CustumerType_h)
#define __ModeloBancario_CustumerType_h

class Account;

#include "Person.h"

class Customer : public Person {
public:
    Customer();
    ~Customer();
    int getNatural(void);
    void setNatural(int newNatural);
    int getLegal(void);
    void setLegal(int newLegal);

    Account** acocount;

protected:
private:
    int natural;
    int legal;
};
#endif
