#pragma once
/***********************************************************************
 * Module:  Date.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:43:28
 * Purpose: Declaration of the class Date
 ***********************************************************************/

#if !defined(__ModeloBancario_Date_h)
#define __ModeloBancario_Date_h

#include <iostream>
#include "Account.h"

class Date : public Account {
public:
    Date(string, string, string);
    ~Date();
    string getDay(void);
    void setDay(string newDay);
    string getMonth(void);
    void setMonth(string newMonth);
    string getYear(void);
    void setYear(string newYear);
    Date calcDate(void);

protected:
private:
    string day;
    string month;
    string year;
};
#endif

