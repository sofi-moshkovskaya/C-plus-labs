/*
16.	�������� ���������, ������� ��������� �������� � ��� ���������� ����� � ��������� ��� ��� ������.���� ����� ��� � �������� ��������� �
��������� ������.���������� ��� ������� �� ����� �����, �� �������� �� ����� ������ ������� ����� � ����� ����������.


Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <Windows.h>
using namespace std;

/*void print_file(char file[])
{
	ifstream fin(file);
	if (!fin)
	{
		cout << "Error!!!\nThe file doesn`t exist.";
		return;
	}

	char c;
	while (fin.get(c)) 
	{
		if (c == '\n' || (c > '�' && c < '�') || c == ',' || c == ' ' || c == '.' || c == '!' || c == '?')
			cout << c;
	}

}*/

void main(int argn, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	//char file[20] = "task16.txt";
	
	ifstream fin(argv[1]);
	
	if (!fin)
	{
		cout << "Error!!!\nThe file doesn`t exist.";
		return;
	}

	char c;
	while (fin.get(c))
	{
		if (c == '\n' || (c > '�' && c < '�') || c == ',' || c == ' ' || c == '.' || c == '!' || c == '?')
			cout << c;
	}

	//print_file(file);
	_getch();
}