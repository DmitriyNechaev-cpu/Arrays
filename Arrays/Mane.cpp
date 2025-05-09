#include<iostream>
using namespace std;

void main()
{
	setl ocale(LC_ALL, ""); 
	const int SIZE = 5;//размер массива
	int arr[SIZE] = { 3,5,8 };
	arr[3] = 1024; //Обращение к эмементу массива на записть 
		//cout << arr[3] << endl; //Обращение к эмементу массива на чтение
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}