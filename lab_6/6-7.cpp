//6.	Напишите методы доступа к полям класса “Студент”.
//7.	Напишите программу, в которой создаются два объекта типа “Студент”.Установите их возраст, пол и стипендию с помощью методов доступа.
//		Распечатайте значения отдельных членов - данных объектов на экране, используя методы доступа.
//		Определите и распечатайте средний возраст и суммарную стипендию этих двух студентов.


#include <iostream>
using namespace std;

typedef unsigned short int ushort;

class Student
{
private:
	ushort age;
	char sex;
	int scholarship;
public:
	Student();
	Student(ushort, char, int);
	~Student();
	ushort getAge() { return age; };
	char getSex() { return sex; };
	int getScholarShip() { return scholarship; };
	void setAge(ushort);
	void setSex(char);
	void setScholarShip(int);
};

int main()
{
	Student s1, s2;

	s1.setAge(17);
	s1.setSex('f');
	s1.setScholarShip(1300);

	cout << s1.getAge() << " " << s1.getSex() << " " << s1.getScholarShip() << endl;

	s2.setAge(21);
	s2.setSex('m');
	s2.setScholarShip(3200);

	cout << s2.getAge() << " " << s2.getSex() << " " << s2.getScholarShip() << endl;

	cout << "Middle age: " << (s1.getAge() + s2.getAge()) / 2. << endl;
	cout << "Middle scholarship: " << (s1.getScholarShip() + s2.getScholarShip()) / 2. << endl;

	cin.get();
}

Student::Student()
{
	age = 0;
	sex = 'm';
	scholarship = 0;
	cout << "Student created" << endl;
}

Student::Student(ushort a, char s, int ss)
{
	age = a;
	sex = s;
	scholarship = ss;
	cout << "Student created" << endl;
}

Student::~Student()
{
	cout << "Student destroyed" << endl;
	cin.get();
}

void Student::setAge(ushort a)
{
	age = a;
}

void Student::setSex(char s)
{
	sex = s;
}

void Student::setScholarShip(int ss)
{
	scholarship = ss;
}
