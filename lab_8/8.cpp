//8.	�������� ������ ������ ���� � �����.����� ��������� �� ����.�������� � ������������ �������� ����� ������� � ������� ���������.
// Moshkovskaya Sophiia 28.11.18

#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int *pa = &a;
	cout << "���� " << *pa << pa << (unsigned long)pa << &a <<&pa << endl;
	*pa = 18;
	cout << "����� " << *pa;
	_getch();
}