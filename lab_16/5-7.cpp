/*
5.	Напишите программу, предлагающую пользователю ввести его фамилию, имя и отчество, а затем выводящую эти сведения в текстовый файл.
6.	Напишите программу в которой ФИО вводятся из текстового файла и затем выводятся на экран.
7.	Измените программы п.1 и п.2 на циклические.

Moshkovskaya Sophia
18.03.2019*/

#include <fstream>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

ostream& line(ostream& os)
{
	return os << "--------------------------------------------------------------" << endl;
}

void main()
{
	string surname, name, patronymic;
	bool next = true;

	while (next)
	{
		cout << "\nInput your Surname, Name, Patronymic by space." << endl;
		cin >> surname >> name >> patronymic;

		ofstream fout("fio.txt", ios::app);
		fout << "STUDENT\t\tSurname:  " << surname << "\tName:  " << name << "\tPatronymic:  " << patronymic << endl;
		
		cout << "\nDo you want to continue?\t1-yes, 0-no" << endl;
		cin >> next;
		
		if (next == 0)
		{
			ifstream fin("fio.txt");
			if (!fin) return;

			//fin >> surname >> name >> patronymic;
			//cout << "Student\tSurname:  " << surname << "\tName:  " << name << "\tPatronymic:  " << patronymic << endl << endl;
			cout << endl;
			char c;
			while(fin.get(c))
				cout << c;
		}
		
		fout.close();
	}
		
	_getch();
}