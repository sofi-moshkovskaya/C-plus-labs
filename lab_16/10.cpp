/*
10.	�������� ���������, ����������� � ��������������� �������� ����, ��������� � �.5.
	���������� ��� ������ ������� ���������� � �����(��������� ������).


Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <string>
using namespace std;

ostream& line(ostream os)
{
	return os << "-------------------------------------------------------------------------" << endl;
}

void main()
{
	string surname, name, patronymic, filename = "c:\\users\\Sonya\\source\\repos\\LAB 16\\5\\fio.txt";
	string s;

	ifstream fin(filename);
	if (!fin) return;

	while (getline(fin, s))
	{
		cout << s << endl;
	}
	

	_getch();
}