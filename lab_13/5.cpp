/*
5.	Ќапишите программу обработки различных средств транспорта c использование массива указателей типа Transport.ѕри обработке  используйте
как виртуальные методы, так и средства RTTI.

Moshkovskaya Sophia
26/02/2019
*/


#include <iostream>
#include <string>
#include <typeinfo.h>
#include <conio.h>
using namespace std;


enum Type { car, bus, sportcar, wagon, coupe, microbus };


//ADT 
class Transport
{
public:
	Transport() : model("Venicle"), release(2016), number("BT 2394 OO") {};
	Transport(int a) { cout << "Input model, number and release date: "; cin >> model >> number >> release; }
	virtual ~Transport() {};

	virtual void SetDate(int year) { release = year; }
	virtual void SetModel(string m) { model = m; }
	virtual void SetNumber(string numb) { number = numb; }
	virtual int GetDate()const { return release; }
	virtual string GetModel() const { return model; }
	virtual string GetNumber()const { return number; }
	
	
	virtual Type GetType() = 0;
	virtual void Input() = 0;		
	virtual void Display() = 0;		
	virtual void Drive() = 0;
	virtual void Sound() = 0;

protected:
	int release;
	string model, number;
};



class Car : virtual public Transport
{
public:
	Car() : Transport(), speed(140) { model="Car"; };
	Car(int a) : Transport(a) { cout << "Input max speed: "; cin >> speed; }
	~Car() {};

	void SetSpeed(int s) { speed = s; }
	int GetSpeed() { return speed; }
	virtual Type GetType() { return car; }

	void Drive() {};
	void Sound() {};

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
	virtual Type GetType() { return bus; }

	void Drive() {};
	void Sound() {};

	void Display()
	{
		cout << "Car`s model: " << model << ", \nnumber: " << number << ", release date: " << release << endl;
		cout << "Seat: " << seats << endl;
	}

	void Input()
	{
		cout << "Input model, number and release date.";
		cin >> this->model >> this->number >> this->release;
		cout << "Input amount of sets: ";
		cin >> seats;
	}

private:
	int seats;
};



class Microbus : public Car, public Bus
{
public:
	Microbus() :Bus() { SetSpeed(440); model = "Microbus"; }
	Microbus(int a) :Bus(a) {};
	~Microbus() {};
	virtual Type GetType() { return microbus; }

	void Drive() {};
	void Sound() {};

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



class SportsCar :public Car
{
public:
	SportsCar() :Car() { Car::SetSpeed(440); model = "Sportcar"; }
	SportsCar(int a) :Car(a) {};
	~SportsCar() {};

	virtual Type GetType() { return sportcar; }

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

class Wagon : public Car
{
public:
	Wagon() :Car() { Car::SetSpeed(65); model = "Wagon"; }
	Wagon(int a) :Car(a) {};
	~Wagon() {};
	
	virtual Type GetType() { return wagon; }
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
	virtual Type GetType() { return coupe; }

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
	const int N = 7;
	Transport* item[N];
	int i = 0, choice;


	for (i; i < N; ++i)
	{
		cout << "1-car, 2-bus, 3-sportcar, 4-wagon, 5-coupe, else-microbus.   ";
		cin >> choice;

		switch (choice)
		{
		case 1: item[i] = new Car; break;
		case 2: item[i] = new Bus; break;
		case 3: item[i] = new SportsCar; break;
		case 4: item[i] = new Wagon; break;
		case 5: item[i] = new Coupe; break;
		default: item[i] = new Microbus;
		}

		//item[i]->Input();
		//cout << endl;
	}

	for (i = 0; i < N; ++i)
	{
		item[i]->Display();

		if( strcmp(typeid(item[i]).name(), "Wagon") ||
			item[i]->GetType()==coupe|| 
			item[i]->GetType()==sportcar)
		{
			item[i]->Drive(); item[i]->Sound();
		}

		cout << endl;
	}

	for (i; i < N; ++i)
	{
		delete item[i];
		item[i] = nullptr;
	}

	_getch();
}