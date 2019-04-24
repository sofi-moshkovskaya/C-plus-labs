//4.	Напишите несколько конструкторов и деструктор для класса “Студент”.
//Мошковская София 08.11.18

#include <iostream>
#include <string.h>
using namespace std;


class Student
{
public:
	int age;
	char sex;
	double st;

	Student()  //конструктор по-умолчанию
	{
		age = 50;
		char sex = 'm';
		st = 1300;
	}

	Student(int a, char s, double m) // конструктор с параметрами
	{
		age = a;
		sex= s;
		st = m;
	}

	Student(int) //конструктор клавиатурный
	{
		Input();
	}

	void Input() {
		cout << "Input age, gender and schoolarship of a student" << endl;
		cin >> age >> sex >> st;
	}

	void Output() const {
		cout << "\nYour data is:\n" << "Age " << age << "\nGender " << sex << "\nScholarship " << st;
	}

	~Student()
	{
		cout << "Student destroyed" << endl;
		cin.get();
	}
};

void main()
{
	Student s1;
	s1.Output();

	Student s2(0, 'f', 2350.6);
	s2.Output();

	Student s3(1);
	s3.Output();
	cin.get();
}