/*

2.	Преобразуйте этот класс в класс с динамическим выделением памяти.
3.	Напишите дружественную функцию для обработки объекта типа фирма.
4.	Напишите операторы для вставки и извлечения в поток объектов  класса фирма.
5.	Напишите главную программу, выполняющую создание и обработку  объекта типа фирма.

Moshkovskaya Sophia
05.03.2019
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int srand(time(NULL));

class Person
{
public:
	string surname;
	static int amount;


	Person(string s) : surname(s) { amount++; }
	~Person() { amount--; }
};
int Person::amount = 0;

class Admin : public Person
{
public:
	int age;

	Admin(string s) : Person(s) { age = 25 + rand() % 35; }
	~Admin() {};
};

class Employee : public Person
{
public:
	int salary;

	Employee(string s) : Person(s), salary(6300) {};
	~Employee() {};
};

class Worker : public Person
{
public:
	double exp;	//experience 

	Worker(string s) : Person(s) { exp = 1 + rand() % 5; }
	~Worker() {};
};

class Firm
{
public:
	Admin MyAdmin;
	Employee MyEmployee;
	Worker MyWorker;

	void Display() { MyAdmin.Display(); MyEmployee.Display(); MyWorker.Display(); }
};