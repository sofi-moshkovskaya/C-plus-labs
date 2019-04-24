/*
11.	Используйте любой ранее разработанный класс.Напишите в нем :
a)	операторы для стандартного ввода - вывода(экран и клавиатура);
b)	специализированные методы для последовательного текстового и бинарного ввода - вывода объектов;
c)	специализированные методы для прямого бинарного ввода - вывода объектов;
12.	Напишите программу, создающую в цикле несколько объектов этого класса в стеке(свободной памяти).
	Запишите этот объекты последовательно в двоичный файл, пользуясь методами класса.
13.	Напишите программу для просмотра и редактирования объектов файла, созданного в п.2, в режиме прямого доступа.


Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
using namespace std;

ostream& line(ostream os)
{
	return os << "-------------------------------------------------------------------------" << endl;
}

class Bus
{
public:
	Bus() : release(2016), number(2268), seats(18) {};
	Bus(int a) { cout << "Input number and release date: "; cin >> number >> release; ; cout << "Input amount of sets: "; cin >> seats; }
	~Bus() {};

	void SetSets(int s) { seats = s; }
	int GetSets() { return seats; }
	void SetDate(int year) { release = year; }
	void SetNumber(int numb) { number = numb; }
	int GetDate()const { return release; }
	int GetNumber()const { return number; }

	
	//операторы для стандартного ввода - вывода(экран и клавиатура);
	const friend ostream& operator<<(ostream& out, Bus& bus)
	{
		cout << "Bus`s number: " << bus.GetNumber() << ", release date: " << bus.GetDate() << endl;
		cout << "Seats: " << bus.GetSets() << endl;
		return out;
	}
	friend istream& operator >>(istream& in, Bus& bus)
	{
		int s, r, n;
		cout << "Input number and release date.";
		cin >> n >> r; bus.SetNumber(n); bus.SetDate(r);
		cout << "Input amount of sets: ";
		cin >> s; bus.SetSets(s);
		return in;
	}
	
	//специализированные методы для последовательного текстового и бинарного ввода - вывода объектов;
	void Input_binary(Bus&, char[]);
	void Output_binary(Bus&, char[]);

	//специализированные методы для прямого бинарного ввода - вывода объектов;
	void Straight_Output(Bus, char[]);
	void Straight_Intput(Bus, char[]);

private:
	int seats;
	int release, number;
};

void Bus::Input_binary(Bus& s, char file[])
{
	ofstream fout(file, ios::binary);
	fout.write((char*)&s, sizeof(s));
	fout.close();
}
void Bus::Output_binary(Bus& s, char file[])
{
	ifstream fin(file, ios::binary);
	if (!fin) return;
	fin.read((char*)&s, sizeof(s));
	fin.close();
}

void Bus::Straight_Output(Bus obj,char filename[])
{
	//cout << "Straight_Output" << endl;
	fstream file(filename, ios::in | ios::out | ios::binary);
	int number = 0;
	cout << "Input the number of sought bus (1-10)\t";
	cin >> number;
	number *= sizeof(obj);
	file.seekg(number, ios::beg);
	file.read((char*)&obj, sizeof(obj));
	cout << obj;
	file.close();
}
void Bus::Straight_Intput(Bus obj, char filename[])
{
	//cout << "Straight_Intput" << endl;
	fstream file(filename, ios::in | ios::out | ios::binary);
	int number = 0; 
	cout << "\nInput the number of sought bus to be replaced(1-10)\t";
	cin >> number;
	Bus b; cin >> b;
	number *= sizeof(obj);
	file.seekp(number, ios::beg);
	file.write((char*)&b, sizeof(b));
	file.close();
}

//13.	Напишите программу для просмотра и редактирования объектов файла, созданного в п.2, в режиме прямого доступа.

void main()
{
	char file_name[] = "task11.bin";
	Bus a;
	//12.	Напишите программу, создающую в цикле несколько объектов этого класса в стеке(свободной памяти).
	//Запишите этот объекты последовательно в двоичный файл, пользуясь методами класса.

	/*for (int i = 0; i < 11; i++)				создали разные автобусы в файле 
	{
		Bus d(4);
		d.Input_binary(d, file_name);
	}*/

	a.Straight_Output(a, file_name);
	a.Straight_Intput(a, file_name);


	_getch();
}