
#if !defined(__Controller_Legal_Client_h)
#define __Controller_Legal_Client_h

#include <sstream>
#include <fstream> 
#include <iostream> 
#include <stdlib.h>
#include "BankStream.h"
#include "..\Model\LegalClient.h"


class ControllerLegalClient : public BankStream{
public:
    //Constructor
    ControllerLegalClient() : BankStream() {}
    //Destroyer
    ~ControllerLegalClient() {}
          
    void writeFile(LegalClient legalClient) {

        string cadena = legalClient.getRUC() + " " + legalClient.getName() + " " + legalClient.getLastName() + " " + legalClient.getNacionality() + " " + legalClient.getAge() + " " + legalClient.getNumAccount()+ "\n";
        file = fopen("legalClients.txt", "a");
        fputs(cadena.c_str(), file);
        fclose(file);
        system("pause");
    }
    void print(string consult) {
        person = this->getData(consult); 
        for (int i = 0; i < 10; i++)
            cout << *(person + i)<< endl;
        
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

    string* person = new string[10];
    string* getData(string consult) {

        read.open("legalClients.txt", ios::in);
        if (read.is_open()) {
            string ruc, name, lastName, nacionality, age, numAccount;
            waxPerson();
            int i = 0;
            while (!read.eof()) {
                if (!read.eof()) {
                    read >> ruc >> name >> lastName >> nacionality >> age >> numAccount;
                    if (consult == ruc) {
                        *(person + i) = ruc + " " + name + " " + lastName + " " + nacionality + " " + age + " " + numAccount;
                        i++;
                    }                    
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