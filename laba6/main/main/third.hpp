#include <iostream>
using namespace std;

static void third()
{
	int i_numbercode, a = 0;
	char ch_inputChar;
	do
	{
		cout << "������� �����: ";
		cin >> ch_inputChar;
		if (ch_inputChar >= '0' && ch_inputChar <= '9')
		{
			i_numbercode = (char)(ch_inputChar);
			cout << "��� �����: " << i_numbercode << endl;
			a = 11;
		}
		else
		{
			cout << "����� � ����� ���������" << endl;
		}
	} while (a < 10);
}