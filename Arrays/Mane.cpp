#include<iostream>
using namespace std;

void main()
{
	setl ocale(LC_ALL, ""); 
	const int SIZE = 5;//������ �������
	int arr[SIZE] = { 3,5,8 };
	arr[3] = 1024; //��������� � �������� ������� �� ������� 
		//cout << arr[3] << endl; //��������� � �������� ������� �� ������
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}