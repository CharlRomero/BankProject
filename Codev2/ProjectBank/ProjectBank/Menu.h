#pragma once

#if !defined(__Menu_h)
#define __Menu_h

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include "Account.h"
#include "Person.h"
#include "LegalClient.h"
#include "NaturalClient.h"
using namespace std;

class Menu {
public:
	Menu();
	void menu( Account a);
	void funMenuAccount(int, Account a);
	void funMenuTransaction( Account a);
	void funMenuTypeClient( Account a);
private:
	int options = 4;
	string *menuHead = new string [4];
	string *menuAccount = new string[3];
	string *menuClient = new string[3];
	string *menuTransaction = new string[3];
	string *menuTypeClient = new string[3];
	
};
Menu::Menu()
{
	*(menuTypeClient + 0) = "Cliente Natural         ";
	*(menuTypeClient + 1) = "Cliente Juridico        ";
	*(menuTypeClient + 2) = "Menu Principal     ";


	*(menuAccount + 0) = "Cuenta Ahorros         ";
	*(menuAccount + 1) = "Cuenta Corriente        ";
	*(menuAccount + 2) = "Menu Principal     ";

	*(menuTransaction + 0) = "Deposito         ";
	*(menuTransaction + 1) = "Retiro           ";
	*(menuTransaction + 2) = "Menu Principal     ";

	*(menuHead + 0) = "Consulta         ";
	*(menuHead + 1) = "Crear Cuenta        ";
	*(menuHead + 2) = "Transaccion     ";
	*(menuHead + 3) = "Salir         ";
}
void Menu::funMenuTypeClient( Account a)
{
	int cursor = 0;
	char tecla;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                SELECCIONE UNA OPCION         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(menuTypeClient + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuTypeClient + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 7) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 3 + 1;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					funMenuAccount(1, a);
					break;
				case 1:
					funMenuAccount(2, a);
					break;
				case 2:
					this->menu( a);
					break;
				}
			}
		}
	}
	free(menuTypeClient);
}
void Menu::funMenuTransaction( Account a)
{
	int cursor = 0;
	char tecla;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                SELECCIONE UNA OPCION         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(menuTransaction + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuTransaction + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 7) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 3 + 1;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					funMenuAccount(4, a);
					break;
				case 1:
					funMenuAccount(5, a);
					break;
				case 2:
					this->menu(a);
					break;
				}
			}
		}
	}
	free(menuTransaction);
}

void Menu::funMenuAccount(int n, Account a)
{
	int cursor = 0;
	char tecla;
	int cont = 1;
	string auxAccont;
	Person *p;
	Natural natural;
	Legal legal;
	system("cls");
	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                SELECCIONE UNA OPCION         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(menuAccount + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuAccount + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 7) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 3 + 1;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					if (n == 1)
					{
						natural.readDates();
						auxAccont =  a.createNumAccount(11, natural.getId()); //11 para cuenta ahorros

					}else if (n == 2)
					{
						//crear cuenta de cliente juridico RUC 
						legal.readDates();
						auxAccont = a.createNumAccount(11, legal.getRUC());
						cout << "crear cuenta tipo juricido (Ruc)";
					}
					else if(n == 3)
					{
						//leer nuemro cuenta e imprimir todas las cuentas de esta perosna (consulta)
						cout << "Realizar una consulta";
					}
					else if (n == 4)
					{
						//realizar transaccion de desposito para ahorros
						cout << "realizar transaccion de desposito para ahorros";
					}
					else if (n == 5)
					{
						//realizar transaccion de retiro para ahorros
						cout << "realizar transaccion de desposito para ahorros";
					}
					break;
				case 1:
					if (n == 1)
					{
						natural.readDates();
						auxAccont = a.createNumAccount(22, natural.getId()); //22 para cuenta corriente


					}
					else if (n == 2)
					{
						legal.readDates();
						auxAccont = a.createNumAccount(11, legal.getRUC());
						//crear cuenta de cliente juridico RUC 
						cout << "crear cuenta tipo juricido (Ruc)"; 
					}
					else if (n == 3)
					{
						//leer nuemro cuenta e imprimir todas las cuentas de esta perosna (consulta)
						cout << "Realizar una consulta";
					}
					else if (n == 4)
					{
						//realizar transaccion de desposito para corriente
						cout << "realizar transaccion de desposito para corriente";
					}
					else if (n == 5)
					{
						//realizar transaccion de retiro para ahorros
						cout << "realizar transaccion de desposito para corriente";
					}
					break;
				case 2:
					this->menu(a);
					break;
				}
			}
		}
	}
	free(menuAccount);
}
void Menu::menu(Account a) {

	int cursor = 0;
	char tecla;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                BIENVENIDO                    " << endl;
		for (int i = 0; i < options; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(menuHead + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuHead+i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 7) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = options + 1;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					funMenuAccount(3, a);
					break;
				case 1:
					funMenuTypeClient(  a);
					break;
				case 2:
					funMenuTransaction( a);
					break;
				case 3:
					system("cls");
					cout << endl << "<<<<<<<<<Gracias por usar nuestro programa>>>>>>>>>" << endl;
					exit(1);
					break;
				}
			}
		}
	}
	free(menuHead);
}

#endif
