#include <iostream>
using namespace std;

static void first()
{
	int i_difascii, a = 0;
	char ch_inputChar;
	do
	{
		cout << "������� ������ ���������� ��������: ";
		cin >> ch_inputChar;
		if ((ch_inputChar >= 'A' && ch_inputChar <= 'Z') || (ch_inputChar >= 'a' && ch_inputChar <= 'z'))
		{
			i_difascii = 'a' - 'A';
			cout << "�������: " << i_difascii << endl;
			a = 11;
		}
		else
		{
			cout << "����� � ����� ���������" << endl;
		}
	} while (a < 10);
}