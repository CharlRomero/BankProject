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
using namespace std;

class Menu {
public:
	Menu();
	void menu(Person p, Account a);
	void funMenuClient(Person p, Account a);
	void funMenuAccount(int, Person p, Account a);
	void funMenuTransaction(Person p, Account a);
private:
	int options = 4;
	string *menuHead = new string [4];
	string *menuAccount = new string[3];
	string *menuClient = new string[3];
	string *menuTransaction = new string[3];
	
};
Menu::Menu()
{
	*(menuAccount + 0) = "Cuenta Ahorros         ";
	*(menuAccount + 1) = "Cuenta Corriente        ";
	*(menuAccount + 2) = "Menu Principal     ";

	*(menuTransaction + 0) = "Deposito         ";
	*(menuTransaction + 1) = "Retiro           ";
	*(menuTransaction + 2) = "Menu Principal     ";

	*(menuClient + 0) = "Cedula       ";
	*(menuClient + 1) = "RUC          ";
	*(menuClient + 2) = "Menu Principal     ";

	*(menuHead + 0) = "Consulta         ";
	*(menuHead + 1) = "Crear Cuenta        ";
	*(menuHead + 2) = "Transaccion     ";
	*(menuHead + 3) = "Salir         ";
}
void Menu::funMenuTransaction(Person p, Account a)
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
					funMenuAccount(0, p, a);
					break;
				case 1:
					funMenuAccount(0, p, a);
					break;
				case 2:
					Menu men;
					men.menu(p, a);
					break;
				}
			}
		}
	}

}
void Menu::funMenuClient(Person p, Account a)
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
				cout << *(menuClient + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuClient + i) << endl;
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
					break;
				case 1:
					break;
				case 2:
					Menu men;
					men.menu(p, a);
					break;
				}
			}
		}
	}


}
void Menu::funMenuAccount(int n, Person p, Account a)
{
	int cursor = 0;
	char tecla;
	int cont = 1;
	string auxAccont;
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
						p.readDates();
						auxAccont =  a.createNumAccount(11, p.getId()); //11 para cuenta ahorros

					}
					else
					{
						
					}
					
					break;
				case 1:
					if (n == 1)
					{
						p.readDates();
						auxAccont = a.createNumAccount(22, p.getId()); //22 para cuenta corriente
	
					}
					else
					{

					}
					break;
				case 2:
					Menu men;
					men.menu(p, a);
					break;
				}
			}
		}
	}
}
void Menu::menu(Person p, Account a) {

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
					funMenuAccount(0, p, a);
					break;
				case 1:
					funMenuAccount(1, p, a);
					break;
				case 2:
					funMenuTransaction(p, a);
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
}

#endif
