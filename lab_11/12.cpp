/*12.	Напишите функции для  поиска и сортировки в массиве объектов типа Worker.

Moshkovskaya Sophia
01.02.19 */

#include <iostream>
#include <conio.h>
#include <sstream>
#include <string.h>
using namespace std;

class Worker
{
	int id;
	int salary;
public:
	char Surname[30] = "";
	string Adress;
	Worker() {};
	Worker(int _id, int sal, char surname[], string add);
	~Worker() {};

	void SetId(int _id) { id = _id; }
	int GetId() const { return id; }
	void SetSalary(int sal) { salary = sal; }
	int GetSalary() const { return salary; }
	void SetSurname(char sur[]) { strcpy_s(Surname, sur); };
	void SetAdress(string add) { Adress = add; }


	bool operator ==(Worker &w) const;
	bool operator < (Worker &w) const;
	bool operator >(Worker &w) const;

};

void Print(Worker w[], int Max);
int Find(Worker w[], int Max, char surname[]);
void Sort(Worker array[], int MAX);


void main()
{
	const int N = 5, M = 20;
	char Surname1[M] = "Petrov";
	char Surname2[M] = "Dmitriev";
	char Surname3[M] = "Belov";
	char Surname4[M] = "Gusev";
	char Surname5[M] = "Kotov";



	Worker Team[N] = { Worker(32,21400, Surname1, "Adress1"), 
						Worker(1234,34200, Surname2, "Adress2"), Worker(543,1260, Surname3,"Adress3"),
						Worker(34,1230,Surname4,"Adress4"), Worker(46,8430, Surname5, "Adress5") };

	char find[M] = "Gusev";

	Print(Team, N);
	int index = Find(Team, N, find);
	
	if (index != -1)
		cout << "Index of " << find << index << endl << endl;
	else
		cout << "Not found!" << endl << endl;

	Sort(Team, N);
	Print(Team, N);

	_getch();
}
	

	


Worker:: Worker(int _id, int sal, char surname[], string add)
{
	id = _id;
	salary = sal;
	this->SetSurname(surname);
	this->SetAdress(add);
}


bool Worker:: operator == (Worker& w)const
{
	return strcmp(this->Surname, w.Surname) == 0;

}
bool Worker:: operator < (Worker& w)const
{
	return strcmp(this->Surname, w.Surname)<0;

}

bool Worker:: operator > (Worker& w)const
{
	return strcmp(this->Surname, w.Surname) > 0;
}

int Find(Worker w[], int Max, char surname[])
{
	int ind = -1;
	for (int i = 0; i < Max; ++i)
	{
		if (surname == w->Surname)
			ind = i;
	}

	return ind;
}

void Sort(Worker array[], int MAX)

{
	int i, j;
	Worker max;
	Worker temp;
	int imax;

	for (i = 0; i < MAX; ++i)
	{
		max = array[i];
		imax = i;

		for (j = i; j < MAX; ++j)
		{
			if (array[j] > max)
			{
				max = array[j];
				imax = j;
			}
		}

		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}

}

void Print( Worker w[],int Max)
{
	for(int i=0;i<Max;++i)
		cout << w[i].Surname << endl;
}