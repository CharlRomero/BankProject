
#if !defined(__Controller_Legal_Client_h)
#define __Controller_Legal_Client_h

#include "Controller/BankStream.h"
#include "Model/LegalClient.h"

class ControllerLegalClient : BankStream{
public:
    void writeFile() {
        write.open(path, ios::out | ios::app);
        if (write.fail())
            cout << "No se pudo abrir el archivo..." << endl;

        write << legalClient.getId() + " " + legalClient.getName() + " " + legalClient.getNacionality() + " " + legalClient.getRUC();

        write.close();
    }
    vector<LegalClient> getData() {
        read.open(path, ios::in);

        if (read.is_open()) {
            string id, name, nacionality, ruc;
            vector<LegalClient> legalClients;
            while (!read.eof()) {
                read >> id, name, nacionality, ruc;
                LegalClient legalClient(id, name, nacionality, ruc);
                legalClients.push_back(legalClient);
            }
            return legalClients;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
    }
private:
    LegalClient legalClient;
};
#endif
