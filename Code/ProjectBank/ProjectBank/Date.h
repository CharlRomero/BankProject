#if !defined(__Menu_h)
#define __Date_h

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
