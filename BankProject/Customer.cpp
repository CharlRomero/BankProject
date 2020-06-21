#include "Customer.h"

Customer::Customer() {}
Customer::~Customer() {}

int Customer::getNatural() { return natural; }
void Customer::setNatural(int natural) { this->natural = natural; }

int Customer::getLegal() { return legal; }
void Customer::setLegal(int legal) { this->legal = legal; }