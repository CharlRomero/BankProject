#if !defined(__Menu_h)
#define __Menu_h

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include "..\BankProject\Model\Account.h"
#include "..\BankProject\Controller\ControllerNaturalClient.h"
#include "..\BankProject\Model\NaturalClient.h"
#include "..\BankProject\Controller\ControllerLegalClient.h"
#include "..\BankProject\Model\LegalClient.h"
#include "..\BankProject\InputData.h"
using namespace std;

class Menu {
public:
	Menu() {

		*(menuHead + 0)				= "	Menu registar		";
		*(menuHead + 1)				= "	Menu transaccion	";
		*(menuHead + 2)				= "	Consulta		";
		*(menuHead + 3)				= "	Salir				";

		*(accountOption + 0)		= "	Cuenta Ahorros				";
		*(accountOption + 1)		= "	Cuenta Corriente			";
		*(accountOption + 2)		= "	Regresar al menu principal	";

		*(clientOption + 0)			= "	Cedula						";
		*(clientOption + 1)			= "	RUC							";
		*(clientOption + 2)			= "	Regresar al menu principal	";

		*(transactionOption + 0)	= "	Deposito					";
		*(transactionOption + 1)	= "	Retiro						";
		*(transactionOption + 2)	= "	Regresar al menu principal	";

		*(typeClientOption + 0)		= "	Cliente Natural				";
		*(typeClientOption + 1)		= "	Cliente Juridico			";
		*(typeClientOption + 2)		= "	Regresar al menu principal	";

	}
	void menu() {

		int cursor = 0;
		char tecla;
		int cont = 1;

		for (;;) {
			system("cls");
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
			cout << "					BIENVENIDO                    " << endl;
			for (int i = 0; i < 4; i++) {
				if (cursor == i) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
					cout << *(menuHead + i) << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << *(menuHead + i) << endl;
				}
			}//complejidad de algoritmos ejemplo
			for (;;) {
				tecla = _getch();
				if (tecla == 80) {
					cursor++;
					if (cursor == 4) {
						cursor = 0;
					}
					break;
				}
				if (tecla == 72) {
					cursor--;
					if (cursor == -1) {
						cursor = 5;
					}
					break;
				}
				if (tecla == 13) {
					switch (cursor) {
					case 0:
						menuAccount();
						break;
					case 1:
						menuTransaction();
						break;
					case 2:
						menuConsult();
						break;
					case 3:
						cout << "\n<<<<<<<<<	Gracias por usar nuestro programa	>>>>>>>>>" << endl;
						exit(1);
						break;
					}
				}
			}
		}
		free(menuHead);
	}
private:
	string* menuHead			= new string[4];
	string* accountOption		= new string[3];
	string* clientOption		= new string[3];
	string* transactionOption	= new string[3];
	string* typeClientOption	= new string[3];
	InputData<string> enter;

	void menuClient() {
		int cursor = 0;
		char tecla;
		int cont = 1;
		system("cls");

		for (;;) {
			system("cls");
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 70);
			cout << "                MENU CLIENTES         " << endl;
			for (int i = 0; i < 3; i++) {
				if (cursor == i) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
					cout << *(clientOption + i) << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << *(clientOption + i) << endl;
				}
			}
			for (;;) {
				tecla = _getch();
				if (tecla == 80) {
					cursor++;
					if (cursor == 3) {
						cursor = 0;
					}
					break;
				}
				if (tecla == 72) {
					cursor--;
					if (cursor == -1) {
						cursor = 4;
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
						menu();
						break;
					}
				}
			}
		}
		free(clientOption);
	}
	void menuAccount() {
		int cursor = 0;
		char tecla;
		int cont = 1;

		system("cls");
		for (;;) {
			system("cls");
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
			cout << "                MENU CUENTAS         " << endl;
			for (int i = 0; i < 3; i++) {
				if (cursor == i) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
					cout << *(accountOption + i) << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << *(accountOption + i) << endl;
				}
			}//complejidad de algoritmos ejemplo
			for (;;) {
				tecla = _getch();
				if (tecla == 80) {
					cursor++;
					if (cursor == 3) {
						cursor = 0;
					}
					break;
				}
				if (tecla == 72) {
					cursor--;
					if (cursor == -1) {
						cursor = 4;
					}
					break;
				}
				if (tecla == 13) {
					switch (cursor) {
					case 0:
						menuTypeClient();
						break;
					case 1:
						menuTypeClient();
						break;
					case 2:
						menu();
						break;
					}
				}
			}
		}
		free(accountOption);
	}
	void menuTransaction() {
		int cursor = 0;
		char tecla;
		int cont = 1;
		system("cls");

		for (;;) {
			system("cls");
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
			cout << "                MENU TRANSACCION         " << endl;
			for (int i = 0; i < 3; i++) {
				if (cursor == i) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
					cout << *(transactionOption + i) << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << *(transactionOption + i) << endl;
				}
			}//complejidad de algoritmos ejemplo
			for (;;) {
				tecla = _getch();
				if (tecla == 80) {
					cursor++;
					if (cursor == 3) {
						cursor = 0;
					}
					break;
				}
				if (tecla == 72) {
					cursor--;
					if (cursor == -1) {
						cursor = 4;
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
						menu();
						break;
					}
				}
			}
		}
		free(transactionOption);
	}
	void menuTypeClient() {
		int cursor = 0;
		char tecla;
		int cont = 1;
		system("cls");
		NaturalClient naturalClient;
		ControllerNaturalClient controllerNaturalClient;

		LegalClient legalClient;
		ControllerLegalClient controllerLegalClient;
		for (;;) {
			system("cls");
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
			cout << "                SELECCIONE UNA OPCION         " << endl;
			for (int i = 0; i < 3; i++) {
				if (cursor == i) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
					cout << *(typeClientOption + i) << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << *(typeClientOption + i) << endl;
				}
			}
			for (;;) {
				tecla = _getch();
				if (tecla == 80) {
					cursor++;
					if (cursor == 3) {
						cursor = 0;
					}
					break;
				}
				if (tecla == 72) {
					cursor--;
					if (cursor == -1) {
						cursor = 3;
					}
					break;
				}
				if (tecla == 13) {
					switch (cursor) {
					case 0:
						system("CLS");
						naturalClient.readDatas();
						controllerNaturalClient.writeFile(naturalClient);
						menu();
						break;
					case 1:
						system("CLS");						
						legalClient.readDatas();
						controllerLegalClient.writeFile(legalClient);
						menu();
						break;
					case 2:
						menu();
						break;
					}
				}
			}
		}
		free(typeClientOption);
	}
	void menuConsult() {
		int cursor = 0;
		char tecla;
		int cont = 1;
		
		system("cls");		
		ControllerNaturalClient controllerNaturalClient;

		ControllerLegalClient controllerLegalClient;
		for (;;) {
			system("cls");
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
			cout << "                SELECCIONE UNA OPCION         " << endl;
			for (int i = 0; i < 3; i++) {
				if (cursor == i) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
					cout << *(typeClientOption + i) << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << *(typeClientOption + i) << endl;
				}
			}
			for (;;) {
				tecla = _getch();
				if (tecla == 80) {
					cursor++;
					if (cursor == 3) {
						cursor = 0;
					}
					break;
				}
				if (tecla == 72) {
					cursor--;
					if (cursor == -1) {
						cursor = 3;
					}
					break;
				}
				if (tecla == 13) {
					switch (cursor) {
					case 0:
						system("CLS");						
						//controllerNaturalClient.consult(enter.CI("Ingresar la cedula a consultar: "));
						menu();
						break;
					case 1:
						system("CLS");						
						//cout << controllerLegalClient.getData(enter.ruc("Ingresar la RUC a consultar: "));
						controllerLegalClient.print(enter.ruc("Ingresar la RUC a consultar: "));
						system("pause");
						menu();
						break;
					case 2:
						menu();
						break;
					}
				}
			}
		}
		free(typeClientOption);
	}
};
#endif
