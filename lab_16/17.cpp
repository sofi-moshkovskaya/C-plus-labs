/*
17.	Запустите программу п.2 так, чтобы она выводила свои результаты не на экран, а в текстовый файл.
18.	Перепишите  программу п.2 с применением функций ввода - вывода языка С.
19.	Введите ФИО, возраст, вес одной строкой в символьный массив и  затем в программе получите отдельные переменные и выведите их на экран.
	Используйте функции ввода - вывода языка С.

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