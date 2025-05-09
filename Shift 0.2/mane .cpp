#include <iostream>
#include <conio.h> // Эта библиотека специфична для Windows и может не работать на других платформах

using namespace std;

int main() { 
    setlocale(LC_ALL, "");



 
    int num;
    cout << "Введите число: ";
    cin >> num;

    cout << "Шестнадцатеричное представление: ";
    for (int j = 65536; j >= 1; j /= 16) {
        int b = num / j;
        num %= j;

        switch (b) {
        case 10: cout << "A "; break;
        case 11: cout << "B "; break;
        case 12: cout << "C "; break;
        case 13: cout << "D "; break;
        case 14: cout << "E "; break;
        case 15: cout << "F "; break;
        default: cout << b << " "; break;
        }
    }
    cout << endl;



    _getch(); // Держит консольное окно открытым (только для Windows)
    return 0;  // Возвращаем 0 при успешном завершении
}