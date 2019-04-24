/*
1.	Напишите простой контейнерный класс для небольшой фирмы, в которой работает администратор, 
	служащий и рабочий – производные 
	объекты от общего базового класса.
2.	Преобразуйте этот класс в класс с динамическим выделением памяти.
3.	Напишите дружественную функцию для обработки объекта типа фирма.
4.	Напишите операторы для вставки и извлечения в поток объектов  класса фирма.
5.	Напишите главную программу, выполняющую создание и обработку  объекта типа фирма.

Moshkovskaya Sophia 
05.03.2019
*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Person
{
public:
	static int amount;
	string surname;
	
	Person() : surname("Ivanov") {};
	~Person() {}; 
};
 
int Person::amount = 0;

class Admin: public Person
{public:
	int age;
	
	Admin() : Person() { age = 25;}
	~Admin() {};

	void Display() { cout << "Admin`s surname: " << surname << ",\nage: " << age; }
};

class Employee: public Person
{public:
	int salary;

	Employee() : Person(), salary(6300) {};
	~Employee() {};

	void Display() { cout << "Employee`s surname: " << surname << ",\nsalary: " << salary; }
};

class Worker: public Person
{public:
	double exp;	//experience 

	Worker() : Person() { exp = 4; }
	~Worker() {};

	void Display() { cout << "Worker`s surname: " << surname << ",\nexperience: " << exp; }
};

class Firm
{
public:
	
	Admin* MyAdmin;
	Employee* MyEmployee;
	Worker* MyWorker;
	
	Firm() {
		Person::amount++;
		MyAdmin = new Admin; MyEmployee = new Employee; MyWorker = new Worker; 
		if (MyAdmin == NULL || MyEmployee == NULL || MyWorker == NULL )
			cout << "Out of memory!!!" << endl;	}

	~Firm() { Person::amount--; delete MyAdmin; delete MyEmployee; delete MyWorker; MyAdmin = 0; MyEmployee = 0; MyWorker = 0;}

	Firm(const Firm&  f)
	{
		MyAdmin = new Admin; MyEmployee = new Employee; MyWorker = new Worker;
		if (MyAdmin == NULL || MyEmployee == NULL || MyWorker == NULL)
			cout << "Out of memory!!!" << endl;

		MyAdmin = f.MyAdmin;MyEmployee = f.MyEmployee;MyWorker = f.MyWorker;
	}

	Firm& operator =(const Firm& f)
	{
		if (*this == f) return *this;

		delete MyAdmin; delete MyEmployee; delete MyWorker;
		MyAdmin = new Admin; MyEmployee = new Employee; MyWorker = new Worker;

		*MyAdmin = *(f.MyAdmin); 
		*MyEmployee = *(f.MyEmployee);
		*MyWorker = *(f.MyWorker);
		return *this;
	}

	friend bool operator ==(const Firm& f1, const Firm& f2)
	{
		if (f1.MyAdmin == f2.MyAdmin && f1.MyEmployee == f2.MyEmployee && f1.MyWorker == f2.MyWorker)
			return true;
		else return false;
	}

	//Напишите операторы для вставки и извлечения в поток объектов  класса фирма.
	const friend ostream & operator << (ostream &out, const Firm &);
	friend istream & operator >> (istream &in, Firm &);

	friend static void Amount(Firm& f) { cout << "There are " << Person::amount << " workers."; }	
	//Напишите дружественную функцию для обработки объекта типа фирма.
};

const ostream & operator << (ostream &out, const Firm &f)
{
	cout << "Admin`s surname: " << f.MyAdmin->surname << ",\nage: " << f.MyAdmin->age << endl << endl;
	cout << "Worker`s surname: " << f.MyWorker->surname << ",\nexperience: " << f.MyWorker->exp << endl << endl;
	cout << "Employee`s surname: " << f.MyEmployee->surname << ",\nsalary: " << f.MyEmployee->salary << endl << endl;
	return out;
}
istream & operator >> (istream &in, Firm &f)
{
	cout << "==============================" << endl;
	cout << "Input surname  ";
	cin >> f.MyAdmin->surname;
	cout << "Input Admin`s age  ";
	cin >> f.MyAdmin->age;
	

	cout << "Input surname  ";
	cin >> f.MyWorker->surname;
	cout << "Input Worker`s experience  ";
	cin >> f.MyWorker->exp;
	

	cout << "Input surname  ";
	cin >> f.MyEmployee->surname;
	cout << "Input Employee`s salary  ";
	cin >> f.MyEmployee->salary;
	cout << "==============================" << endl << endl;
	
	return in;
}

int main()
{
	Firm* Corporation = new Firm;
	cin >> *Corporation;
	//cout << *Corporation;
	
	Firm* corp = new Firm;

	corp->MyAdmin->age = 100;
	*corp = *Corporation;
	delete Corporation;


	cout << "Corp#1:--------------------\n" << *corp;
	//cout << "Corp#2:-------------------\n" << *c;
	
	//delete Corporation; Corporation = nullptr;


	delete corp; corp = NULL;
	delete c; c = NULL;

	_getch();
	return 0;
}