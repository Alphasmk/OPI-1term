#include <iostream>
using namespace std;

static void findDifferenceNumber()
{
	bool isDone = false;
	int numberCode, a = 0;
	char symbol;
	while (isDone != true)
	{
		cout << "������� �����: ";
		cin >> symbol;
		if (symbol >= '0' && symbol <= '9')
		{
			numberCode = (char)(symbol);
			cout << "��� �����: " << numberCode << endl;
			isDone = true;
		} else
		{
			cout << "����� � ����� ���������" << endl;
		}
	}
}