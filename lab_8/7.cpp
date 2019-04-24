//7.	Напишите программу, в которой создаются два объекта типа Employee в свободной памяти; установите их возраст,
//		число проработанных лет и зарплату; распечатайте их значение. (см.Тема 6).
// Moshkovskaya Sophiia 28,11,18

#include <iostream>
#include <conio.h>
using namespace std;

typedef unsigned short int ushort;
class Employee
{
	int age = 0;
	double years = 0, sal = 0;
public:
	Employee();
	~Employee();
	ushort getAge() { return age; };
	double getYears() { return years; };
	double getSal() { return sal; };
	void setAge(ushort);
	void setYears(double);
	void setSal(double);

};

void main()
{
	Employee *pe1 = new Employee;
	Employee *pe2 = new Employee;
	if (pe1==0)
	{
		cout << "Error! No memory for Employee  1!!!\n";
		return;
	}
	if (pe2 == 0)
	{
		cout << "Error! No memory for Employee  2!!!\n";
		return;
	}
	(*pe1).setAge(40), pe1->setYears(15.3), pe1->setSal(7850.5);
	pe2->setAge(32), pe2->setYears(10), pe2->setSal(12300.5);
	cout << "Employee 1:" << "\nAge: " << pe1->getAge() << "\nWorks " << pe1->getYears() << " years" << "\nSlary " << pe1->getSal() << endl << endl;
	cout << "Employee 2:" << "\nAge: " << pe2->getAge() << "\nWorks " << pe2->getYears() << " years" << "\nSlary " << pe2->getSal() << endl;

	delete pe1, pe2;
	pe1 = 0, pe2 = 0;
	_getch();
}
Employee::Employee(){
	age = 0;
	years = 0;
	sal = 0;
}
Employee::~Employee()
{}
void Employee::setAge(ushort a)
{
	age = a;
}
void Employee::setYears(double y)
{
	years = y;
}
void Employee::setSal(double ss)
{
	sal = ss;
}
