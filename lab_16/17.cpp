/*
17.	��������� ��������� �.2 ���, ����� ��� �������� ���� ���������� �� �� �����, � � ��������� ����.
18.	����������  ��������� �.2 � ����������� ������� ����� - ������ ����� �.
19.	������� ���, �������, ��� ����� ������� � ���������� ������ �  ����� � ��������� �������� ��������� ���������� � �������� �� �� �����.
	����������� ������� ����� - ������ ����� �.

Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	string surname;
	string name;
	string patronymic;

	cout << "Input your Surname, Name, Patronymic by space." << endl;
	cin >> surname >> name >> patronymic;

	ofstream fout("task17.txt");
	fout << "\n\nStrudent:\nSurname:  " << surname << "\nName:  " << name << "\nPatronymic:  " << patronymic << endl;
	fout.close();

	_getch();
}