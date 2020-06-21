#pragma once

#if !defined(__Menu_h)
#define __Menu_h

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class Menu {
public:
	void menu(string[]);
};

void Menu::menu(string menu[]) {

	int cursor = 0;
	char tecla;
	int opcion;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                SELECCIONE UNA OPCION         " << endl;
		for (int i = 0; i < 7; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << menu[i] << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << menu[i] << endl;
			}
		}
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
					cursor = 6;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:					
					Menu::menu(menu);
					break;
				case 1:
					Menu::menu(menu);
					break;
				case 2:
					Menu::menu(menu);
					break;
				case 3:
					Menu::menu(menu);
					break;
				case 4:
					Menu::menu(menu);
					break;
				case 5:
					Menu::menu(menu);
					break;
				case 6:
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