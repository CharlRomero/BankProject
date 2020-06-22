#include "BankStream.h"
#include <iostream>

using namespace std;

BankStream::BankStream() {}
BankStream::~BankStream() {}

//Person BankStream::registerPerson() {}
//
//Person BankStream::readData() {}
//
//Person BankStream::searchCustomer() {}

void BankStream::modifyFile(Person customer){}

void BankStream::readFile(Person customer) {}

void BankStream::writeFile(Person customer) {
	this->file.open("cuentas.txt", ios::out);

	if (this->file.fail()) {
		cout << "No se pudo abrir el archivo." << endl;		
	}

	this->file << "";
	this->file.close();
}