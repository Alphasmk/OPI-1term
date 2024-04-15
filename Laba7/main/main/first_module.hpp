#include <iostream>
using namespace std;

static void findDifferenceASCII()
{
	bool isDone = false;
	int differenceASCII;
	char symbol;
	while(isDone != true)
	{
		cout << "Введите символ латинского алфавита: ";
	  cin >> symbol;

	  if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
		{
		  differenceASCII = 'a' - 'A';
			cout << "Разница: " << differenceASCII << endl;
			isDone = true;
		} else
		{
			cout << "Выйди и введи нормально" << endl;
		}
	}
}