//9.***Напишите реализацию классов Транспорт, Автомобиль, Автобус как виртуальных и главную программу аналогичную п.3.

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Transport
{
public:
	//() : model("Zhiguli"), release(2010), number("BT2394OO") {}; 
	Transport() : model("Car"), release(2016), number("BT 2394 OO") {};
	Transport(int a) { cout << "Input model, number and release date: "; cin >> model >> number >> release; }
	virtual ~Transport() {};

	virtual void SetDate(int year) { release = year; }
	virtual void SetModel(string m) { model = m; }
	virtual void SetNumber(string numb) { number = numb; }
	virtual int GetDate()const { return release; }
	virtual string GetModel() const { return model; }
	virtual string GetNumber()const { return number; }

	virtual void Input()
	{
		cout << "Input model, number and release date.";
		cin >> this->model >> this->number >> this->release;
	}

	virtual void Display()
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


void main()
{
	const int N = 3;
	Transport* item[N];
	int i = 0, choice; 


	for (i; i < N; ++i)
	{
		cout << "1 - auto, 2 - bus, else - transport.   ";
		cin >> choice;

		switch (choice)
		{
		case 1: item[i] = new Auto; break;
		case 2: item[i] = new Bus; break;
		default: item[i] = new Transport;
		}

		item[i]->Input();
		cout << endl;
	}

	for (i=0; i < N; ++i)
	{
		//if (i % 2 == 1)
			item[i]->Display();
	}

	for (i; i < N; ++i)
	{
		delete item[i];
		item[i] = nullptr;
	}

	_getch();
}