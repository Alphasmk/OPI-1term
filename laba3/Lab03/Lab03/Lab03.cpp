#include <iostream>

using namespace std;
//StatkoGerman2005 
// 53 74 61 74 6b 6f 47 65 72 6d 61 6e 32 30 30 35
// 53 74 61 74 6b 6f 47 65 72 6d 61 6e 32 30 30 35
// 0053 0074 0061 0074 006b 006f 0047 0065 0072 006d 0061 006e 0032 0030 0030 0035
//СтатькоГерман2005
// d1 f2 e0 f2 fc ea ee c3 e5 f0 ec e0 ed 32 30 30 35 00
// d0 a1 d1 82 d0 b0 d1 82 d1 8c d0 ba d0 be d0 93 d0 b5 d1 80 d0 bc d0 b0 d0 bd 32 30 30 35
// 0421 0442 0430 0442 044c 043a 043e 0413 0435 0440 043c 0430 043d 0032 0030 0030 0035
//Статько2005German
// d1 f2 e0 f2 fc ea ee 32 30 30 35 47 65 72 6d 61 6e 00
// d0 a1 d1 82 d0 b0 d1 82 d1 8c d0 ba d0 be 32 30 30 35 47 65 72 6d 61 6e
// 0421 0442 0430 0442 044c 043a 043e 0032 0030 0030 0035 0047 0065 0072 006d 0061 006e

int main()
{
	setlocale(LC_CTYPE, "rus");
	char first[] = "StatkoGerman2005";
	char second[] = "СтатькоГерман2005";
	char third[] = "Статько2005German";
	wchar_t First[] = L"StatkoGerman2005";
	wchar_t Second[] = L"СтатькоГерман2005";
	wchar_t Third[] = L"Статько2005German";
	cout << first << endl;
	cout << second << endl;
	cout << third << endl;
	cout << First << endl;
	cout << Second << endl;
	cout << Third;
}