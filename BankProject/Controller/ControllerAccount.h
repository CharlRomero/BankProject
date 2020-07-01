
#if !defined(__Controller_Account_h)
#define __Controller_Account_h

#include "BankStream.h"
#include "..\Model\Account.h"

class ControllerAccount : BankStream {
public:
	//Constructor
	ControllerAccount(string path) : BankStream(path) {}
	//Destroyer
	~ControllerAccount() {}

	void writeFile() {
        write.open(path, ios::out | ios::app);
        if (write.fail())
            cout << "No se pudo abrir el archivo..." << endl;

        for (size_t i = 0; i < customer.size(); i++)
            write << customer[i].getId() + " " + customer[i].getName() + " " + customer[i].getLastName() + " " + customer[i].getAge() + " " + customer[i].getNacionality() + " " + customer[i].getEmail() + "\n";

        write.close();
	}
	vector<Person> getData() {
        read.open(path, ios::in);

        if (read.is_open()) {
            string name, lastName, nacionality, id, age, email;
            vector<Person> persons;
            while (!read.eof()) {
                read >> id >> name >> lastName >> age >> nacionality >> email;
                Person person(name, lastName, id, age, nacionality, email);
                persons.push_back(person);
            }
            return persons;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
	}
private:
    Account account;
};
#endif

