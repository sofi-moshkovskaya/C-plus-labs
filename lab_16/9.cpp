/*
9.	Используйте  любой ранее разработанный класс.Напишите программу, создающую в цикле несколько объектов этого класса в стеке
	(свободной памяти).Запишите этот объекты в двоичный файл.

Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class Transport
{
public:
	Transport() : model("Venicle"), release(2016), number("BT 2394 OO") {};
	Transport(int a) { cout << "Input model, number and release date: "; cin >> model >> number >> release; }
	virtual ~Transport() {};

	void SetDate(int year) { release = year; }
	void SetModel(string m) { model = m; }
	void SetNumber(string numb) { number = numb; }
	int GetDate()const { return release; }
	string GetModel() const { return model; }
	string GetNumber()const { return number; }

	friend ostream& operator <<(ostream&out, Transport& t)
	{
		return out<< "Car`s model: " << t.model << ", \nnumber: " << t.number << ", release date: " << t.release << endl;
		
	}

protected:
	int release;
	string model, number;
};

void main()
{
	for (int i = 0; i < 3; i++)
	{
		Transport t;
		ofstream fout("cars.bin", ios::binary | ios::app);
		fout.write((char*)&t, sizeof(t));
		
	}

	_getch();
}