//5.	Измените код для объявления класса “Студент”, закрыв в нем члены - данные.
//Мошковская София 08.11.18


#include <iostream>
#include <string.h>
using namespace std;


class Student
{
	int age;
	char sex;
	double st;

public:
	void AgeSet();
	int AgeGet() const;
	void SexSet();
	char SexGet() const; 
	void StSet();
	double StGet() const;

	void Input()
	{
		AgeSet();
		SexSet();
		StSet();
	}

	void OutPut() const
	{
		cout << "Age: ";
		cout << AgeGet();
		cout << " Gender: ";
		cout << SexGet();
		cout << " Scholarship: ";
		cout << StGet() << endl;
	}

	~Student() { cin.get(); } //дестркутор
};

void Student::AgeSet()
{
	int a;
	cout << "Input Age ";
	cin >> a;
	age = a;
}
int Student::AgeGet() const
{
	return age;
}
void Student::SexSet()
{
	char s;
	cout << "Input Geander ";
	cin >> s;
	sex = s;
}
char Student::SexGet() const
{
	return sex;
}
void Student::StSet()
{
	double m;
	cout << "Input scholarship ";
	cin >> m;
	st = m;
}
double Student::StGet() const
{
	return st;
}

void main()
{
	Student s1;
	Student s2;
	
	s1.Input();
	s2.Input();
	
	s1.OutPut();
	s2.OutPut();
}