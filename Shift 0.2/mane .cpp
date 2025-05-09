#include <iostream>
#include <conio.h> // Эта библиотека специфична для Windows и может не работать на других платформах
//#define ARRAYS // Закомментировал, чтобы код компилировался по умолчанию
//#define BIN // Закомментировал, чтобы код компилировался по умолчанию
using namespace std;

int main() { 
    setlocale(LC_ALL, "");

#ifdef ARRAYS 

    int arr[100];
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Размер массива должен быть от 1 до 100." << endl;
        return 1; 
    }

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Элемент массива [" << i << "]: "; 
        cin >> arr[i];
    }
    cout << endl;

    cout << "Вывод массива: ";
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;

    cout << "Сумма элементов массива: " << sum << endl;
    cout << "Среднее арифметическое элементов: " << sum / n << endl;

    cout << "Вывод массива в обратном порядке: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minVal = arr[0]; // Инициализируем переменные для минимума и максимума
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) { 
        if (arr[i] < minVal) minVal = arr[i]; 
        if (arr[i] > maxVal) maxVal = arr[i]; 
    }
    cout << "Минимальное значение массива: " << minVal << endl;
    cout << "Максимальное значение массива: " << maxVal << endl;
    cout << endl;

    cout << "Вывод массива по возрастанию: ";
    int t; 
    for (int i = 0; i < n - 1; i++) {
        t = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[t] > arr[j]) {
                t = j;
            }
        }
        if (t != i) {
            int a = arr[i];
            arr[i] = arr[t];
            arr[t] = a;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

#endif // ARRAYS

#ifdef BIN 
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

#endif // BIN

    _getch(); // Держит консольное окно открытым (только для Windows)
    return 0;  // Возвращаем 0 при успешном завершении
}