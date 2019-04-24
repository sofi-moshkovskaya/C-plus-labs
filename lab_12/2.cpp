/*Напишите объявления для следующих диаграмм классов, включив в него члены - данные, конструкторы по умолчанию и с параметрами, 
методы доступа, методы ввода - вывода для клавиатуры и экрана и т.д. :

*/
#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
	Student() : numb(772), sex("male"), surname("petrov") {};
	Student(int a) { cout << "Input number, gender and surname: "; cin >> numb >> sex >> surname; }
	~Student() {};


	void SetNum(int n) { numb = n; }
	void SetSex(string s) { sex = s; }
	void SetSurname(string sur) { surname = sur; }
	int GetNumber()const  { return numb; } 
	string GetSex() const { return sex; }
	string GetSurname() const { return surname; }


	void Display()
	{
		cout << "Student`s number - " << numb << ",gender - " << sex << ",surname is " << endl << endl;
	}

	void Input()
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


class Transport
{
public:
	//() : model("Zhiguli"), release(2010), number("BT2394OO") {}; 
	Transport() : model("Car"), release(2016), number("BT 2394 OO") {};
	Transport(int a) { cout << "Input model, number and release date: "; cin >> model >> number >> release; }
	~Transport() {};

	void SetDate(int year) { release = year; }
	void SetModel(string m) { model = m; }
	void SetNumber(string numb) { number = numb; }
	int GetDate()const { return release; }
	string GetModel() const { return model; }
	string GetNumber()const { return number; }

	void Input()
	{
		cout << "Input model, number and release date."; 
		cin >> this->model >> this->number >> this->release;
	}

	void Display()
	{
		cout << "Car`s model: " << model << ", number: " << number << ", release date: " << release << endl;
	}

protected:
	int release;
	string model, number;
};

class Auto :public Transport
{
public:
	Auto() : Transport(), speed(140) {};
	Auto(int a) : Transport(a) { cout << "Input max speed: "; cin >> speed; }
	~Auto() {};

	void SetSpeed(int s) { speed = s; }
	int GetSpeed() { return speed; }

	void Input()
	{
		Transport::Input();
		cout << "Input max speed: "; 
		cin >> speed;
	}

	void Display()
	{
		Transport::Display();
		cout << "Max speed: " << speed << endl << endl;
	}

private:
	int speed;

};

class Bus :public Transport
{
public:
	Bus() : Transport(), seats(18) {};
	Bus(int a) : Transport(a) { cout << "Input amount of sets: "; cin >> seats; }
	~Bus() {};

	void SetSets(int s) { seats = s; }
	int GetSets() { return seats; }

	void Display()
	{
		Transport::Display();
		cout << "Seat: " << seats << endl << endl;
	}

	void Input()
	{
		Transport::Input();
		cout << "Input amount of sets: "; 
		cin >> seats;
	}

private:
	int seats;
};