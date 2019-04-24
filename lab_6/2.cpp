//2.	Напишите программу, в которой создаются два объекта типа “Студент”.
//	Установите их возраст, пол и стипендию.Распечатайте значения членов - данных объектов на экране.
//Мошковская София 07.11.18

#include <iostream>
using namespace std;

typedef unsigned short int USHORT;

class Student
{
public:
	USHORT age;
	char sex;
	double st;

	void Data(USHORT a, char s, double m)
	{
		USHORT age = a;
		char sex = s;
		double st = m;
	}

	void ViewData(USHORT a, char s, double m)
	{
		cout << "Age  " << a << "Sex  " << s << "Scholarship  " << m;
	}
};

void main()
{
	USHORT a;
	char s;
	double m;

	Student S1, S2;
	cout << "Input age, sex and scholarship of 1st student  ";
	cin >> a >> s >> m;
	S1.Data(a,s,m);
	S1.ViewData(a,s,m);

	cout << "Input age, sex and scholarship of 2nd student  ";
	cin >> a >> s >> m;
	S2.Data(a,s,m);
	S2.ViewData(a,s,m);
}

