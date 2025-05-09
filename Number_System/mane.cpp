﻿#include <iostream>
using namespace std;
using std::cout;

void main()
{
	setlocale(LC_ALL, "");
	int N;
	cout << "Введите целое число: "; cin >> N; cout << endl;

	// Перевод в двоичную систему счисления
	int k = 0;
	int binary[30];
	int bin = N;
	do
	{
		binary[k] = bin % 2;
		bin /= 2;
		k++;
	} while (bin != 0);
	cout << N << " в двоичной системе счисления: ";
	for (int i = k - 1; i >= 0; i--) cout << binary[i];
	cout << endl;

	// Перевод в шестнадцатиричную систему счисления
	int m = 0;
	int hex[30];
	int hx = N;
	do
	{
		hex[m] = hx % 16;
		hx /= 16;
		m++;
	} while (hx != 0);
	cout << N << " в шестнадцатиричной системе счисления: ";
	for (int i = m - 1; i >= 0; i--)
	{
		switch (hex[i])
		{
		case (10): cout << 'A'; break;
		case (11): cout << 'B'; break;
		case (12): cout << 'C'; break;
		case (13): cout << 'D'; break;
		case (14): cout << 'E'; break;
		case (15): cout << 'F'; break;
		default: cout << hex[i];
		}
	}
	cout << endl;
}