//8.	***Напишите реализацию классов Студент, Заочник из предыдущего задания как виртуальных и главную программу аналогичную п.3.

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Student
{
public:
	Student() : numb(772), sex("male"), surname("petrov") {};
	Student(int a) { cout << "Input number, gender and surname: "; cin >> numb >> sex >> surname; }
	virtual ~Student() {};


	virtual void SetNum(int n) { numb = n; }
	virtual void SetSex(string s) { sex = s; }
	virtual void SetSurname(string sur) { surname = sur; }
	virtual int GetNumber()const { return numb; }
	virtual string GetSex() const { return sex; }
	virtual string GetSurname() const { return surname; }


	virtual void Display()
	{
		cout << "Student`s number - " << numb << ",gender - " << sex << ",surname is " << endl << endl;
	}

	virtual void Input()
	{
		cout << "Input number, gender and surname: ";
		cin >> this->numb >> this->sex >> this->surname;
	}

protected:
	string surname;
	string sex;
	int numb;
};


class Zaochnik :public Student
{
public:
	Zaochnik() : Student(), company("KSU"), post("proffesor") {};
	Zaochnik(int a) : Student(a) { cout << "Input company and post: "; cin >> company >> post; };
	~Zaochnik() {};

	void SetCompany(string comp) { company = comp; }
	void SetPost(string p) { post = p; }
	string GetCompany() const { return company; }
	string GetPost() const { return post; }


	void Display()
	{
		cout << "Extramular student`s number - " << numb << ",gender - " << sex << ",surname is " << surname
			<< ".\nHis company is " << company << " and position is " << post << endl << endl;
	}

	void Input()
	{
		Student::Input();
		cout << "\nInput company and position: ";
		cin >> this->company >> this->post;
	}

private:
	string company;
	string post;
};

void main()
{ 
	Student* s1 = new Student(3);
	Student* s2 = new Zaochnik(3);

	s2->Display(); s1->Display();


	_getch();
}