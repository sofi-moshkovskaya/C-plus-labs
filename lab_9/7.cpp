//7.	�������� ��� �������� �������, ������� ��������� ���������� ������ ������ �����
//�������������� ������(Cat, Worker, Pencil�) 
//� ���������� � �������� ���������� ���������� ������.��������� ��.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Worker
{
public:
	double age = 40, salary = 3200, experience = 5;
	string sex = "�������";
};

void Change1(Worker w);
void Change2(Worker &w);
void Change3(Worker *w);
void main()
{
	setlocale(LC_ALL, "Russian");
	Worker Mihaluch;
	cout << "������� ���������� " << Mihaluch.age << ", ��� �������� " << Mihaluch.salary << ", ��� ���� "
		<< Mihaluch.experience << ", ��� ��� " << Mihaluch.sex << endl << endl;

	Change1(Mihaluch);
	cout << "������� ���������� " << Mihaluch.age << ", ��� �������� " << Mihaluch.salary << ", ��� ���� "
		<< Mihaluch.experience << ", ��� ��� " << Mihaluch.sex << endl << endl;

	Change2(Mihaluch);
	cout << "������� ���������� " << Mihaluch.age << ", ��� �������� " << Mihaluch.salary << ", ��� ���� "
		<< Mihaluch.experience << ", ��� ��� " << Mihaluch.sex << endl << endl;

	Change3(&Mihaluch);
	cout << "������� ���������� " << Mihaluch.age << ", ��� �������� " << Mihaluch.salary << ", ��� ���� "
		<< Mihaluch.experience << ", ��� ��� " << Mihaluch.sex << endl << endl;
	_getch();
}

void Change1(Worker w)
{
	w.age +=5;
	w.salary *=5;
	w.experience +=5;
	w.sex = "�������";
	cout << "��������� �� ��������" << endl;
}

void Change2(Worker &w)
{
	w.age += 3;
	w.salary *= 3;
	w.experience += 3;
	w.sex = "�������";
	cout << "��������� �� ������" << endl;
}

void Change3(Worker *w)
{
	w->age += 7;
	w->salary *= 7;
	w->experience += 7;
	w->sex = "�������";
	cout << "��������� � ����������" << endl;
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