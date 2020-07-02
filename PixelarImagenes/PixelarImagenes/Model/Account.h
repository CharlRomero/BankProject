/***********************************************************************
 * Module:  Acocount.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:41:09
 * Purpose: Declaration of the class Acocount
 ***********************************************************************/

#if !defined(__ModeloBancario_Acocount_h)
#define __ModeloBancario_Acocount_h

#include <iostream>
#include"..\Controller\ControllerLegalClient.h"
#include"..\Controller\ControllerNaturalClient.h"

using namespace std;

class Account {
public:
    //Constructors
    Account() {}
    //Destroyer
    //~Account() {}
    //Getter and setter of type account   
    int getTypeAccount(void) { return typeAccount; }
    void setTypeAccount(int typeAccount) { this->typeAccount = typeAccount; }

    float getSaldo(void) { return saldo; }
    void setSaldo(float saldo) { this->saldo = saldo; }

    string createNumAccount(int type, string numci) {
        setTypeAccount(type);
        string digit;
        ControllerLegalClient controlLegal;
        ControllerNaturalClient controlNatural;
        int aux;
        if (typeAccount == 11) {            
            digit = to_string(this->typeAccount) + "0";
            aux = controlNatural.createFinalDigit(digit);
            if(aux==0) {
                digit = to_string(this->typeAccount) + to_string(aux) ;
            }
        }
        if (typeAccount == 22) {
            digit = to_string(this->typeAccount);
            aux = controlLegal.createFinalDigit(digit);
            if (aux == 0) {
                digit = to_string(this->typeAccount) + to_string(aux);
            }
        }                
        return digit + numci;
    }

private:
    int typeAccount;
    float saldo;
};
#endif
