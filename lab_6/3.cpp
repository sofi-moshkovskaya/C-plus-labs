//3.	Разработайте методы класса, позволяющие выполнять ввод / вывод всех
//членов - данных класса “Студент” и проверьте их в главной программе.
//Мошковская София 07.11.18

#include <iostream>
#include <conio.h>
using namespace std;

typedef unsigned short int USHORT;
class Student
{
public:
	USHORT age;
	char sex[8];
	double st;

	void Input();
	void Output() const;
};

void Student::Input()
{
	cin >> age >> sex >> st;
}

void Student::Output() const
{
	cout << "\nYour data is:\n" << "Age " << age << "\nGender " << sex << "\nScholarship " << st;
}

void main()
{
	Student S;
	cout << "Input age, sex and sholarship of student" << endl;
	S.Input();
	S.Output();
	_getch();
}