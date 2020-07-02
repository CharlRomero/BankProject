
#if !defined(__Controller_Account_h)
#define __Controller_Account_h

#include "BankStream.h"
#include "..\Model\Account.h"

class ControllerAccount : BankStream {
public:
	//Constructor
	ControllerAccount() : BankStream() {}
	//Destroyer
	~ControllerAccount() {}

	virtual void writeFile(Person person) {
        cout << " ";
	}
	/*vector<Account> getData() {
        read.open(getPath(), ios::in);

        if (read.is_open()) {
            string numAccount;
            vector<Account> accounts;
            while (!read.eof()) {
                read >> numAccount;
                Account account(numAccount);
                accounts.push_back(account);
            }
            return accounts;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
	}*/
private:
    Account account;
};
#endif

