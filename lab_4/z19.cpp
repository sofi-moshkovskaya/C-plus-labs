//19.	������� � ���������� � �������� �� ����� ���� ����� �������� ��������.
//� ������ ����� �� ������� ����� ����������� ��������� �� ������ �� ������ � ��������� ���������� ���������. 
//���������� ����� 11.10.2018

#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char b = ' ';
	cout << "������� �����" << endl;
	cin >> b;
	if ((int)b >= 224)
	{
		cout << b;
		cin.get();
	}
	else
		cout << "����� �� �������� ��������";
	cin.get();
}