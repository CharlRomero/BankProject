
#if !defined(__Controller_Natural_Client_h)
#define __Controller_Natural_Client_h

#include "Controller/BankStream.h"
#include "Model/NaturalClient.h"

class ControllerNaturalClient : BankStream{
public:
    void writeFile() {
        write.open(path, ios::out | ios::app);
        if (write.fail())
            cout << "No se pudo abrir el archivo..." << endl;

        write << naturalClient.getId() + " " + naturalClient.getName() + " " + naturalClient.getNacionality() + " " + naturalClient.getAge();

        write.close();
    }
    vector<LegalClient> getData() {
        read.open(path, ios::in);

        if (read.is_open()) {
            string id, name, nacionality, ruc;
            vector<NaturalClient> naturalClients;
            while (!read.eof()) {
                read >> id, name, nacionality, age;
                NaturalClient naturalClient(id, name, nacionality, age);
                naturalClients.push_back(naturalClient);
            }
            return legalClients;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
    }
private:
    NaturalClient naturalClient;
};
#endif
