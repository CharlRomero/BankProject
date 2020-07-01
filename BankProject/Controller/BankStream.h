/***********************************************************************
 * Module:  Banca.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:35:23
 * Purpose: Declaration of the class Banca
 ***********************************************************************/
#if !defined(__ModeloBancario_Banca_h)
#define __ModeloBancario_Banca_h

class Person;

#include "Person.h"
#include <fstream>
#include <string>
#include <vector>
#include <io.h>

using namespace std;

class BankStream {
public:
    //Constructors
    BankStream(string path) { this->path = path; };
    BankStream() {}
    //destroyer
    ~BankStream() {}
    //Getter and setter of path
    string getPath() { return path; }
    void setPath(string path) { this->path = path; }

    void writeFile(vector<Person> customer) {
        write.open(path, ios::out | ios::app);
        if (write.fail())
            cout << "No se pudo abrir el archivo..." << endl;

        for (size_t i = 0; i < customer.size(); i++)
            write << customer[i].getName() + " " + customer[i].getId() + " " + customer[i].getAge() + " " + customer[i].getNacionality() + "\n";

        write.close();
    }
    vector<Person> getData() {
        read.open(path, ios::in);
        vector<Person> persons;

        if (read.is_open()) {
            string name, nacionality, id, age;

            while (!read.eof()) {
                read >> name >> id >> age >> nacionality;
                Person person(name, id, age, nacionality);
                persons.push_back(person);
            }
            return persons;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
        return persons;
    }
private:
    ifstream read;
    ofstream write;
    string path;
};
#endif