#include <iostream>
#include <Windows.h>
using namespace std;

static void second()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i_diffw1251, a = 0;
	char ch_inputChar;
	do
	{
		cout << "Введите символ русского алфавита: ";
		cin >> ch_inputChar;
		if ((ch_inputChar >= 'А' && ch_inputChar <= 'Я') || (ch_inputChar >= 'а' && ch_inputChar <= 'я'))
		{
			i_diffw1251 = 'а' - 'А';
			cout << "Разница: " << i_diffw1251 << endl;
			a = 11;
		}
		else
		{
			cout << "Выйди и введи нормально" << endl;
		}
	} while (a < 10);
}