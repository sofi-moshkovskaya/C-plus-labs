//15.	�������� � ��������� inline � �������, ������������ �������� �������� ����������� ��  �������.

#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

inline int symbol(unsigned char s);

void main()
{
	unsigned char s;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ������\t";
	s = getchar();
	cout << "��� �������  " << symbol(s) << endl;
	system("pause");
}

int symbol(unsigned char s)
{
	s = (int)s;
	return s;
}