//14.	�������� � ��������� �������, ������������ ������, 
//���� � ���������� ������� ������� �Y�, �y�, ��, �Ē � ���� � ��������� ������.

#include <iostream>
#include <Windows.h>

using namespace std;

bool bukva(unsigned char a);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char a;
	cin >> a;
	setlocale(LC_ALL, "Russian");
	cout << bukva(a) << endl;
	system("pause");
}

bool bukva(unsigned char a)
{
	
	a = (int)a;
	if (a == 89 || a == 121 || a == 196 || a == 228)
		return true;
	else 
		return false;
}