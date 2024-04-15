#include <iostream>
#include "first.hpp"
#include "second.hpp"
#include "third.hpp"

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    string str_choices;
    char check;
    do {
      cout << "Введите вариант выполнения программы (1 - 4): ";
      cin >> str_choices;

      for (char ch_choice : str_choices) {
        check = ch_choice;
        switch (ch_choice) {
        case '1':
          first();
          break;
        case '2':
          second();
          break;
        case '3':
          third();
          break;
        case '4':
          cout << "Выход из программы" << endl;
          break;
        default:
          cout << "Вы ввели неверный номер варианта: " << ch_choice << endl;
          break;
        }
        if (ch_choice == '4')
        {
          break;
        }
      }
    } while (check != '4');

    system("pause");
}