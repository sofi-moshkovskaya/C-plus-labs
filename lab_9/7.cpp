//7.	Напишите три варианта функции, которая принимает параметром объект любого ранее
//разработанного класса(Cat, Worker, Pencil…) 
//и возвращает в качестве результата измененный объект.Проверьте их.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Worker
{
public:
	double age = 40, salary = 3200, experience = 5;
	string sex = "мужской";
};

void Change1(Worker w);
void Change2(Worker &w);
void Change3(Worker *w);
void main()
{
	setlocale(LC_ALL, "Russian");
	Worker Mihaluch;
	cout << "Возраст сотрудника " << Mihaluch.age << ", его зарплата " << Mihaluch.salary << ", его опыт "
		<< Mihaluch.experience << ", его пол " << Mihaluch.sex << endl << endl;

	Change1(Mihaluch);
	cout << "Возраст сотрудника " << Mihaluch.age << ", его зарплата " << Mihaluch.salary << ", его опыт "
		<< Mihaluch.experience << ", его пол " << Mihaluch.sex << endl << endl;

	Change2(Mihaluch);
	cout << "Возраст сотрудника " << Mihaluch.age << ", его зарплата " << Mihaluch.salary << ", его опыт "
		<< Mihaluch.experience << ", его пол " << Mihaluch.sex << endl << endl;

	Change3(&Mihaluch);
	cout << "Возраст сотрудника " << Mihaluch.age << ", его зарплата " << Mihaluch.salary << ", его опыт "
		<< Mihaluch.experience << ", его пол " << Mihaluch.sex << endl << endl;
	_getch();
}

void Change1(Worker w)
{
	w.age +=5;
	w.salary *=5;
	w.experience +=5;
	w.sex = "женский";
	cout << "Измененно по значению" << endl;
}

void Change2(Worker &w)
{
	w.age += 3;
	w.salary *= 3;
	w.experience += 3;
	w.sex = "женский";
	cout << "Измененно по ссылке" << endl;
}

void Change3(Worker *w)
{
	w->age += 7;
	w->salary *= 7;
	w->experience += 7;
	w->sex = "мужской";
	cout << "Измененно с указателем" << endl;
}


{
	const int N = 100;

	int A[N];
	for (int i = 0; i < N;++i)
	{
		A[i] = i;

	}


	int *p = A;
	int *pe = A + N;
	while (p < pe)
		*p++ = 0;

	memset(A, 0, N * sizeof(int));

}