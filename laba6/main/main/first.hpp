#include <iostream>
using namespace std;

static void first()
{
	int i_difascii, a = 0;
	char ch_inputChar;
	do
	{
		cout << "Введите символ латинского алфавита: ";
		cin >> ch_inputChar;
		if ((ch_inputChar >= 'A' && ch_inputChar <= 'Z') || (ch_inputChar >= 'a' && ch_inputChar <= 'z'))
		{
			i_difascii = 'a' - 'A';
			cout << "Разница: " << i_difascii << endl;
			a = 11;
		}
		else
		{
			cout << "Выйди и введи нормально" << endl;
		}
	} while (a < 10);
}