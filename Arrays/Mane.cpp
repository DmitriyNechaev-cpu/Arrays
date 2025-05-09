#include <iostream>
#include <conio.h> // ��� ���������� ���������� ��� Windows � ����� �� �������� �� ������ ����������

using namespace std;

int main() {
    setlocale(LC_ALL, "");

#ifdef ARRAYS 

    int arr[100];
    int n;
    cout << "������� ������ �������: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "������ ������� ������ ���� �� 1 �� 100." << endl;
        return 1;
    }

    cout << "������� �������� �������:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "������� ������� [" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "����� �������: ";
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;

    cout << "����� ��������� �������: " << sum << endl;
    cout << "������� �������������� ���������: " << sum / n << endl;

    cout << "����� ������� � �������� �������: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minVal = arr[0]; // �������������� ���������� ��� �������� � ���������
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "����������� �������� �������: " << minVal << endl;
    cout << "������������ �������� �������: " << maxVal << endl;
    cout << endl;

    cout << "����� ������� �� �����������: ";
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