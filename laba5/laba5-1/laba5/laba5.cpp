#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice = 0, upper, lower, difascii, diffw1251, numbercode;
	char inputChar;
	while (choice != 4) {
		cout << "Введите вариант(1 - 4): "; cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите символ латинского алфавита: ";
			cin >> inputChar;
			if ((inputChar >= 'A' && inputChar <= 'Z') || (inputChar >= 'a' && inputChar <= 'z'))
			{
				difascii = 'a' - 'A';
				cout << "Разница: " << difascii << endl;
			}
			else
			{
				cout << "Выйди и введи нормально" << endl;
			}
			break;
		case 2:
			cout << "Введите символ русского алфавита: ";
			cin >> inputChar;
			if ((inputChar >= 'А' && inputChar <= 'Я') || (inputChar >= 'а' && inputChar <= 'я'))
			{
				diffw1251 = 'а' - 'А';
				cout << "Разница: " << diffw1251 << endl;
			}
			else
			{
				cout << "Выйди и введи нормально" << endl;
			}
			break;
		case 3:
			cout << "Введите цифру: ";
			cin >> inputChar;
			if (inputChar >= '0' && inputChar <= '9')
			{
				numbercode = (char)(inputChar);
				cout << "Код цифры: " << numbercode << endl;
			}
			else
			{
				cout << "Выйди и введи нормально" << endl;
			}
			break;
		default:
			break;
		}
	}
}