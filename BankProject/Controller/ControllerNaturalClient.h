
#if !defined(__Controller_Natural_Client_h)
#define __Controller_Natural_Client_h

#include "BankStream.h"
#include "..\Model\NaturalClient.h"

class ControllerNaturalClient : BankStream {
public:
    //Constructor
    ControllerNaturalClient() : BankStream() {}
    //Destroyer
    ~ControllerNaturalClient() {}

    void writeFile(NaturalClient naturalClient) { 
    string cadena = naturalClient.getNumAccount() + " " + naturalClient.getId() + " " + naturalClient.getName() + " " + naturalClient.getLastName() + " " + naturalClient.getNacionality() + " " + naturalClient.getAge() + "\n";
    file = fopen("naturalClients.txt", "a");
    fputs(cadena.c_str(), file);
    fclose(file);
    system("pause");
    }
    void print(string consult) {
        person = this->getData(consult);
        for (int i = 0; i < 10; i++)
            cout << *(person + i) << endl;

    }

    int createFinalDigit(string consult) {

        read.open("legalClients.txt", ios::in);
        if (read.is_open()) {
            string ruc, name, lastName, nacionality, age, numAccount;
            waxPerson();
            int i = 0;
            while (!read.eof()) {
                if (!read.eof()) {
                    if (consult == ruc) {
                        i++;
                    }
                }

            }
            return i;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
    }

private:
    FILE *file;
    string* person = new string[10];
    string* getData(string consult) {
        read.open("naturalClients.txt", ios::in);
        int i = 0;
        
        if (read.is_open()) {
            string numAccount, id, name, lastName, nacionality, age;
            vector<NaturalClient> naturalClients;
            while (!read.eof()) {
                read >> numAccount >> id >> name >> lastName >> nacionality >> age;
                if (consult == id) {
                    *(person + i) = id + " " + name + " " + lastName + " " + nacionality + " " + age + " " + numAccount;
                    i++;
                }
            }
            return person;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
    }
    void waxPerson() {
        for (size_t i = 0; i < 10; i++) {
            *(person + i) = " ";
        }
    }
};
#endif
