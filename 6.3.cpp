#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High){
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
 int FindMax(int* a, const int size) {
     int max = a[0]; // ����������, �� ������ ������� � ������������
     for (int i = 1; i < size; i++) {
         if (a[i] > max && a[i] % 2 == 0) { // ���� �������� ������� ������ �� �������� ��������
             max = a[i];   // ��������� ����������� ��������
         }
     }
     return max; // ��������� ����������� �����

 }
 int main()
 {
     srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����
     const int n = 9;
     int a[n];
     const int k = 7;
     int b[k];
     int c[n + k];
     int Low = -10;
     int High = 10;
     Create(a, n, Low, High);
     int maxElement = FindMax(a, n);
     Print(a, n);
     cout << "�������� �����: " << maxElement << endl;


     return 0;
 }