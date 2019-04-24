//9 * ** Напишите циклическую программу для ввода параметров объекта(Cat, Pencil, Worker, Student…)  
//с клавиатуры и распечатки их на экран.Использовать классы  из предыдущей темы.
//Мошковская София 20.11.18

#include<iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
	int age;
	char gender;
	int year;
	double grant;
};


void main()
{
	int num = 0;
	cout << "Input amount of students  ";
	cin >> num;
	for (int i = 1;i <= num;i++)
	{
		Student s;
		cout << "Input age of the student #" << i << endl;
		cin >> s.age;
		cout << "Input gender of the student #" << i << endl;
		cin >> s.gender;
		cout << "Input the year of education of the student #" << i << endl;
		cin >> s.year;
		cout << "Input the scholarship of the student #" << i << endl;
		cin >> s.grant;
		cout << endl;
		
		cout << "Student #" << i << " age:" << s.age << endl;
		cout << "Student #" << i << " gender:" << s.gender << endl;
		cout << "Student #" << i << " year of education:" << s.year << endl;
		cout << "Student #" << i << " scholarship:" << s.grant << endl << endl;
	}
	_getch();
}