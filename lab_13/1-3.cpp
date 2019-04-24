/*
Moshkovskaya Sophia
26/02/2019
*/

// 1.	Напишите объявление класса JetPlane, который наследуется от Rocket и AirPlane ?
// 2.	Напишите объявление для B747, который является производным от класса JetPlane ?

class Rocket {};
class AirPlane {};
class JetPlane : public Rocket, public AirPlane {};
class B747: public JetPlane {};


/*3.	Напишите программу, в которой классы Car и Bus будут производными от класса Transport, а MicroBus – производным от  Car и Bus.
Сделайте Transport абстрактным типом данных с двумя чисто виртуальными функциями.Классы Car и Bus не должны быть ADT.Проверьте программу, 
путем создания объектов разных типов.*/


#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//ADT 
class Transport
{
public:
	Transport() : model("Car"), release(2016), number("BT 2394 OO") {};
	Transport(int a) { cout << "Input model, number and release date: "; cin >> model >> number >> release; }
	virtual ~Transport() {};

	virtual void SetDate(int year) { release = year; }
	virtual void SetModel(string m) { model = m; }
	virtual void SetNumber(string numb) { number = numb; }
	virtual int GetDate()const { return release; }
	virtual string GetModel() const { return model; }
	virtual string GetNumber()const { return number; }

	virtual void Input()=0		//pure virtual func
	{
		cout << "Input model, number and release date.";
		cin >> this->model >> this->number >> this->release;
	}

	virtual void Display()=0		//pure virtual func
	{
		cout << "Car`s model: " << model << ", number: " << number << ", release date: " << release << endl;
	}

protected:
	int release;
	string model, number;
};

class Car : virtual public Transport
{
public:
	Car() : Transport(), speed(140) {};
	Car(int a) : Transport(a) { cout << "Input max speed: "; cin >> speed; }
	~Car() {};

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
		cout << "Max speed: " << speed << endl;
	}

private:
	int speed;

};

class Bus : virtual public Transport
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
		cout << "Seat: " << seats << endl;
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

class Microbus: public Car, public Bus
{
public:
	Microbus() :Bus() { SetSpeed(440); model = "Microbus"; }
	Microbus(int a) :Bus(a) {};
	~Microbus() {};

	void Display()
	{
		Car::Display(); 
		cout << "Seats: " << Bus::GetSets() << endl;
		cout << "Engine capacity: " << capacity << endl;
	}

	void Input()
	{
		Car::Input(); Bus::Input();
		cout << "Input engine capacity: ";
		cin >> capacity;
	}

	int capacity;;

};


void main()
{
	const int N = 7;
	Transport* item[N];
	int i = 0, choice;


	for (i; i < N; ++i)
	{
		cout << "1 - auto, 2 - bus, else - microbus.   ";
		cin >> choice;

		switch (choice)
		{
		case 1: item[i] = new Car; break;
		case 2: item[i] = new Bus; break;
		default: item[i] = new Microbus;
		}

		//item[i]->Input();
		cout << endl;
	}

	for (i = 0; i < N; ++i)
	{
		item[i]->Display();
		cout << endl;
	}

	for (i; i < N; ++i)
	{
		delete item[i];
		item[i] = nullptr;
	}

	_getch();
}