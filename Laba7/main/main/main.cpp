#include <iostream>
#include "first_module.hpp"
#include "second_module.hpp"
#include "third_module.hpp"

using namespace std;

int main() {
  setlocale(LC_CTYPE, "rus");
  string choices;
  char check;

  do
  {
    cout << "Введите вариант выполнения программы (1 - 4): ";
    cin >> choices;
  for (char choice : choices)
  {
    check = choice;
    switch (choice)
    {
    case '1':
      findDifferenceASCII();
      break;
    case '2':
      findDifferenceWindows1251();
      break;
    case '3':
      findDifferenceNumber();
      break;
    case '4':
      cout << "Выход из программы" << endl;
      break;
    default:
      cout << "Вы ввели неверный номер варианта: " << choice << endl;
      break;
     }
    if (choice == '4')
    {
      break;
    }
   }
  } while (check != '4');

  system("pause");
  /*имена файлов
  имена типов
  имена переменных
  имена констант
  имена фукнций*/
}