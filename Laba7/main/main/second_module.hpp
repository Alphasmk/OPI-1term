#include <iostream>
#include <Windows.h>
using namespace std;

static void findDifferenceWindows1251()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool isDone = false;
	int differenceWindows1251, a = 0;
	char symbol;
	while (isDone != true)
	{
		cout << "Введите символ русского алфавита: ";
		cin >> symbol;
		if ((symbol >= 'А' && symbol <= 'Я') || (symbol >= 'а' && symbol <= 'я'))
		{
			differenceWindows1251 = 'а' - 'А';
			cout << "Разница: " << differenceWindows1251 << endl;
			isDone = true;
		} else
		{
			cout << "Выйди и введи нормально" << endl;
		}
	}
}