#include <iostream>
using namespace std;

static void findDifferenceASCII()
{
	bool isDone = false;
	int differenceASCII;
	char symbol;
	while(isDone != true)
	{
		cout << "������� ������ ���������� ��������: ";
	  cin >> symbol;

	  if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
		{
		  differenceASCII = 'a' - 'A';
			cout << "�������: " << differenceASCII << endl;
			isDone = true;
		} else
		{
			cout << "����� � ����� ���������" << endl;
		}
	}
}