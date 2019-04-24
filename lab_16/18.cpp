/*
18.	Перепишите  программу п.2 с применением функций ввода - вывода языка С.


Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;


#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	char surname[50];
	char name[50];
	char patronymic[50];
	

	printf("Input your Surname, Name, Patronymic by space.");
	scanf_s("%s %s %s", surname, name, patronymic);
	
	printf("\n\nStrudent:\nSurname:  %s\nName:  %s\nPatronymic:  %s", surname, name, patronymic);
	
	_getch();
}