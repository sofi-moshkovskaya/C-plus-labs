/*11.	ƒобавьте в личный класс  Worker два новых члена - данных : строку — - стил€(У‘амили€Ф) и 
объект строкового класса компил€тора(УјдресФ).Ќапишите методы доступа дл€ их обработки.
»справьте конструкторы класса и другие его методы и операторы.
–еализуйте в классе операторы сравнени€ на равенство и меньше дл€ члена - данного У‘амили€Ф.

Moshkovskaya Sophia
01.02.19*/

#include <iostream>
#include <conio.h>
#include <sstream>
#include <string.h>
using namespace std;

class Worker
{
	char Surname[30] = "";
	string Adress;
	int id;
	int salary;
public:
	Worker() {};
	Worker(int _id, int sal, char surname[], string add);
	~Worker() {};

	void SetId(int _id) { id = _id;}
	int GetId() { return id; }
	void SetSalary(int sal) { salary = sal; }
	int GetSalary() { return salary; }
	void SetSurname(char sur[]) { strcpy_s(Surname, sur); };
	char* GetSurname() { return Surname; }
	void SetAdress(string add) { Adress = add; }
	string GetAdress() { return Surname; }

	bool operator ==(const char* s);
	bool operator < (Worker w);

};


void main()
{
	Worker Petrov;
	Worker Dmitriev;

	char surname1[] = "Petrov";
	char surname2[] = "Dmitriev";

	Petrov.SetSurname(surname1);
	Dmitriev.SetSurname(surname2);

	/*Petrov.SetId(43); Petrov.SetSalary(45300); Petrov.SetAdress("Ushakova 12");
	Dmitriev.SetId(22); Dmitriev.SetSalary(30100); Dmitriev.SetAdress("Kylika 116"); */


	if (Petrov.GetSurname() == Dmitriev.GetSurname())
		cout << "Lines are equal" << endl;
	else
		cout << "Lines aren`t equal" << endl;

	
	if ((Petrov < Dmitriev) < 0)
		cout << "Line two is longer" << endl;
	else
		cout << "Line one is longer" << endl;

	_getch();
}



Worker::Worker (int _id, int sal, char surname[], string add)
{
	id = _id;
	salary = sal;
	this->SetSurname(surname);
	this->SetAdress(add);
}

bool Worker:: operator ==(const char* s)
{
	return strcmp(Surname, s);

}
bool Worker:: operator < (Worker w)
{
	return strcmp(Surname, w.GetSurname());

}