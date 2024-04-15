#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice = 0, result, upper, lower;
	char inputChar, upperX = 'T', lowerX = 't', upperY = 'Т', lowerY = 'т', Z = '6';
		cout << "Введите вариант программы(1 - X, 2 - Y, 3 - Z, 4 - выход из программы): "; cin >> choice;
	switch (choice) {
	case 1:
		upper = (char)upperX;
		lower = (char)lowerX;
		result = lower - upper;
		cout << "Разница значений второй буквы фамилии на английском языке: " << result;
		break;
	case 2:
		upper = (unsigned char)upperY;
		lower = (unsigned char)lowerY;
		result = lower - upper;
		cout << "Разница значений второй буквы имени на русском языке: " << result;
		break;
	case 3:
		result = (char)Z;
		cout << "Код символа цифры: " << result;
		break;
	case 4:
		cout << "Выход";
		break;
		exit;
	default:
		cout << "Неправильный";
		break;
	}

	_getch();
}