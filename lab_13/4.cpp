/*
4.	Модифицируйте программу п.3 так, чтобы Car был ADT, и выведите из Car классы SportsCar, Wagon, Coupe.Реализуйте в классах простейшие функции.

Moshkovskaya Sophia
26/02/2019
*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


//ADT
class Car
{
public:
	Car() : model("Car"), release(2016), number("BT 2394 OO"), speed(140) {};

	Car(int a) {  cout << "Input model, number and release date: "; cin >> model >> number >> release;
				  cout << "Input max speed: "; cin >> speed; }
	virtual ~Car() {};

	void SetSpeed(int s) { speed = s; }
	int GetSpeed() { return speed; }
	virtual void SetDate(int year) { release = year; }
	virtual void SetModel(string m) { model = m; }
	virtual void SetNumber(string numb) { number = numb; }
	virtual int GetDate()const { return release; }
	virtual string GetModel() const { return model; }
	virtual string GetNumber()const { return number; }


	virtual void Drive() = 0;
	virtual void Sound() = 0;

	void Input()
	{
		cout << "Input model, number and release date.";
		cin >> this->model >> this->number >> this->release;
		cout << "Input max speed: ";
		cin >> speed;
	}

	void Display()
	{		
		cout << "Car`s model: " << model << ", \nnumber: " << number << ", release date: " << release << endl;
		cout << "Max speed: " << speed << endl;
	}

protected:
	int release;
	string model, number;
	int speed;

};

class Bus : public Car
{
public:
	Bus() : Car(), seats(18) { model = "Bus"; }
	Bus(int a) : Car(a) { cout << "Input amount of seats: "; cin >> seats; }
	~Bus() {};

	void SetSets(int s) { seats = s; }
	int GetSets() { return seats; }

	void Display()
	{
		Car::Display();
		cout << "Seat: " << seats << endl;
	}

	void Input()
	{
		Car::Input();
		cout << "Input amount of sets: ";
		cin >> seats;
	}

	void Drive() {};
	void Sound() {};

private:
	int seats;
};

class Microbus: public Bus
{
public:
	Microbus() :Bus() { SetSpeed(440); model = "Microbus"; }
	Microbus(int a) :Bus(a) {};
	~Microbus() {};

	void Display()
	{
		Car::Display();
		cout << "Seats: " << GetSets() << endl;
		cout << "Engine capacity: " << capacity << endl;
	}

	void Input()
	{
		Car::Input(); Bus::Input();
		cout << "Input engine capacity: ";
		cin >> capacity;
	}

	void Drive() {};
	void Sound() {};

	int capacity;;

};


class SportsCar :public Car
{
public:
	SportsCar() :Car() { Car::SetSpeed(440); model = "Sportcar";}
	SportsCar(int a) :Car(a) {};
	~SportsCar() {};
	
	void Drive()
	{
		cout << "Sportcar rides with the speed " << GetSpeed() << "km/h." << endl;
	}

	void Sound()
	{
		cout << "Sportcar has run! Vroom-vroom!" << endl;
	}

	void Display()
	{
		Car::Display();
	}

};

class Wagon: public Car
{
public:
	Wagon() :Car() { Car::SetSpeed(65); model = "Wagon"; }
	Wagon(int a) :Car(a) {};
	~Wagon() {};

	void Drive()
	{
		cout << "Wagon speed is " << GetSpeed() << endl;
	}

	void Sound()
	{
		cout << "Wagon makes a 'choo-choo' sound!" << endl;
	}

	void Display()
	{
		Car::Display();
	}
};

class Coupe :public Car
{
public:
	Coupe() :Car() { Car::SetSpeed(40); model = "Coupe"; }
	Coupe(int a) :Car(a) {};
	~Coupe() {};


	void Drive()
	{
		cout << "Wagon speed is " << GetSpeed() << endl;
	}

	void Sound()
	{
		cout << "Wagon makes a 'choo-choo' sound!" << endl;
	}

	void Display()
	{
		Car::Display();
	}
};

void main()
{
	const int N = 8;
	Car* item[N];
	int i = 0, choice;


	for (i; i < N; ++i)
	{
		cout << "1-sportcar, 2-bus, 3-wagon, 4-coupe, else-microbus.   ";
		cin >> choice;

		switch (choice)
		{
		case 1: item[i] = new SportsCar; break;
		case 2: item[i] = new Bus; break;
		case 3: item[i] = new Wagon; break;
		case 4:item[i] = new Coupe; break;
		default: item[i] = new Microbus;
		}

		//item[i]->Input();
		//cout << endl;
	}

	for (i = 0; i < N; ++i)
	{
		item[i]->Display();
		item[i]->Drive(); item[i]->Sound();
		cout << endl;
	}

	for (i; i < N; ++i)
	{
		delete item[i];
		item[i] = nullptr;
	}

	_getch();
}