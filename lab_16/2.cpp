/*
2.	�������� ���������, ������������ ������������ ������  � ���������� ��� �������, ��� � �������� ��� ������ �����, 
� ����� ��������� �� �� �����.


Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	char surname[50]; 
	char name[50]; 
	char patronymic[50];

	cout << "Input your Surname, Name, Patronymic by space." << endl;
	cin >> surname >> name >> patronymic;

	cout << "\n\nStrudent:\nSurname:  " << surname << "\nName:  " << name << "\nPatronymic:  " << patronymic << endl;

	_getch();
}