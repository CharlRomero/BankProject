#if !defined(__ModeloBancario_Banca_h)
#define __ModeloBancario_Banca_h

#include "..\BankProject\Model\Person.h"
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

    virtual void writeFile(vector<Person> customer) = 0;
    virtual vector<Person> getData() = 0;

private:    
    string path;
};
#endif