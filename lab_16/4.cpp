/*
4.	»спользу€ один из ранее разработанных классов(Worker, Student Е), создайте в программе список объектов путем ввода данных 
	с клавиатуры и рапечатайте его на экране в виде таблицы.

Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Student
{
public:
	char surname[50];
	int age, grand;

	Student() { cout << "\n\nInput age: "; cin >> age; cout << "\nInput surname: "; cin >> surname; cout << "\nInput grand: "; cin >> grand; }
	~Student() {};
};

ostream& line(ostream& os)
{
	return os << "-------------------------------------------------------------------------" << endl;

}

void main()
{
	const int size = 2;
	Student Group[size];

	cout << "\t\t\tStudent`s List\n" << line << endl;
	cout << "є\t:\tSurname\t:\tAge\t:\tGrand\n" << line << endl;


	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "\t" << Group[i].surname << "\t\t" << Group[i].age << "\t" << Group[i].grand << endl;
	}

	_getch();
}
