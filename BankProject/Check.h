/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  IngresoDatos.h
 * Author:  Abigail Cabascango
 * Modified: domingo, 28 de mayo de 2020 17:51:04
 * Purpose: Validar datos ingresados por consola
 ***********************************************************************/

#if !defined(__Check_h)
#define __Check_h

#include<iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

class Check	{
	public:
		Check();
		bool integer(string cadena);
		bool floatDouble(string cadena);
		bool positiveInteger(string cadena);
		bool identificationCard(string);
private:
	char lastDigit(string);
	int calculateTen(int);
};

////////////////////////////////////////////////////////////////////////
// Name:       Validaciones::Validaciones()
// Purpose:    Constructor of  class Validaciones
// Parameters: 
////////////////////////////////////////////////////////////////////////
Check::Check(){}

////////////////////////////////////////////////////////////////////////
// Name:      Validaciones::validar(string cadena, int tipo) 
// Purpose:    Implementation of  Validaciones::validar(string cadena, int tipo) 
// Parameters: string cadena, int tipo
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool Check::integer(string value)
{
	int cont = 0;
	try {
		for (size_t i = 0; i < value.length(); i++) {
			if (isalpha(value[i]))				
				throw 1;
			if (!isdigit(value[i]) && value[i] != '-')
				throw 1;
			if (value[i] == '-')
				cont ++;
			if (cont > 1)
				throw 1;
			
		}
				
	}
	catch (int e) {
		return true;
	}	
	return false;	
}
bool Check::floatDouble(string value)
{
	int cont = 0;
	
	try {
		for (size_t i = 0; i < value.length(); i++) {
			if (isalpha(value[i]))
				throw 1;
			if (!isdigit(value[i]) && value[i] == '.')
				cont++;
			if (!isdigit(value[i]) && value[i] == '-')
				cont++;
			if (cont > 2)				
				throw 1;						
		}	
	}
	catch (int e) {
		return true;
	}	
	return false;
	
}
bool Check::positiveInteger(string cadena)
{
	try {
		for (size_t i = 0; i < cadena.length(); i++) {
			if (isalpha(cadena[i]))
				throw 1;			
			if (!isdigit(cadena[i]) )
				throw 1;					
		}
				
	}
	catch (int e) {
		return true;
	}	
	return false;	
}
bool Check::identificationCard(string identificationCard) {

	try {

		for (size_t i = 0; i < identificationCard.length(); i++)
		{
			if (isalpha(identificationCard[i]))
				throw 1;
			if (!isdigit(identificationCard[i]))
				throw 1;
			if (identificationCard[i] == '.')
				throw 1;
			if (identificationCard[i] == '-')
				throw 1;
			if (identificationCard[0] < 3 && identificationCard[1] < 5)
				throw 1;
			if (identificationCard[2] < 7)
				throw 1;
			if (identificationCard[9] != lastDigit(identificationCard))
				throw 1;
		}

	}
	catch (int e) {
		return true;
	}
	return false;
}

char Check::lastDigit(string identificationCard) {
	int* par = new int[5];
	int* impar = new int[4];
	int result = 0;

	for (size_t i = 0; i < 5; i++) {
		const char* aux = new char(identificationCard[i]);
		*(par + i) = 2 * atoi(aux + (2 * i));
		if (i < 4)
			*(impar + i) = atoi(aux + (2 * i + 1));

		if (*(par + i) >= 10)
			*(par + i) -= 9;

		result += *(par + i) + *(impar + i);
	}

	return (calculateTen(result) - result);
}

int Check::calculateTen(int ten) {
	return ten - (ten % 10) + 10;
}
#endif
