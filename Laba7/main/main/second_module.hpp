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
		cout << "������� ������ �������� ��������: ";
		cin >> symbol;
		if ((symbol >= '�' && symbol <= '�') || (symbol >= '�' && symbol <= '�'))
		{
			differenceWindows1251 = '�' - '�';
			cout << "�������: " << differenceWindows1251 << endl;
			isDone = true;
		} else
		{
			cout << "����� � ����� ���������" << endl;
		}
	}
}