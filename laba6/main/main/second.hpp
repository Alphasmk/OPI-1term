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
		cout << "������� ������ �������� ��������: ";
		cin >> ch_inputChar;
		if ((ch_inputChar >= '�' && ch_inputChar <= '�') || (ch_inputChar >= '�' && ch_inputChar <= '�'))
		{
			i_diffw1251 = '�' - '�';
			cout << "�������: " << i_diffw1251 << endl;
			a = 11;
		}
		else
		{
			cout << "����� � ����� ���������" << endl;
		}
	} while (a < 10);
}