//5.	В главной программе объявите массив указателей типа Shape.Создайте несколько объектов типа Square и Rectangle в свободной памяти,
//сохранив их адреса в этом массиве.Вычислите и распечатайте параметры объектов на экране, используя методы этих классов.
//Уничтожьте объекты и обнулите массив указателей.


#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Shape
{
public:
	Shape() :colour("red"), thickness(1) {};
	Shape(string col, double thickness) : colour(col), thickness(thickness) {};
	virtual ~Shape() {};

	virtual double Perimetr() { return 0; };
	virtual double Area() { return 0; };


	virtual void Display()
	{
		cout << "Square \ncolour: " << colour << "\nthickness: " << thickness << endl << endl;
	};

protected:
	string colour;
	double thickness;
};

class Square :public Shape
{
public:
	Square() : Shape(), lenght(10) {};
	Square(double len) : Shape(), lenght(len) {};
	Square(string col, double thickness, double len) { Shape(col, thickness); lenght = len; };
	~Square() {};

	double Perimetr() { return lenght * 4; };
	double Area() { return lenght * lenght; };

	void Display()
	{
		cout << "Square \nlendht: " << lenght << "\narea; " << Area() << "\nperimeter; " << Perimetr()
			<< "\ncolour: " << colour << "\nthickness: " << thickness << endl << endl;
	};

	double lenght;
};

class Rectangle :public Square
{
public:
	Rectangle() : Square(), width(5), lenght(12) {};
	Rectangle(double wid, double len) : Square(len), width(wid) {};
	Rectangle(string col, double thickness, double len, double wid) : Square(col, thickness, len), width(wid) {};
	~Rectangle() {};

	double Perimetr() { return 2 * (lenght + width); };
	double Area() { return lenght * width; };

	void Display()
	{
		cout << "Rectangle \nwidth: " << width << "\nlendht: "
			<< lenght << "\narea: " << Area() << "\nperimeter: " << Perimetr()
			<< "\ncolour: " << colour << "\nthickness: " << thickness << endl << endl;
	};


protected:
	double width, lenght;
};


void main()
{
	const int MAX = 5;
	Shape* figures[MAX];


	for (int i=0; i < MAX; i++)
	{
		if (i % 2 == 0)
			figures[i] = new Square("blue", i, i+3);
		else 
			figures[i] = new Rectangle(i + 2, i + 5);
		
	}

	for (int i = 0; i < MAX; ++i)
	{
		double k = figures[i]->Area();
		double b = figures[i]->Perimetr();
		cout << "Figure #" << i + 1 << "\narea = " << k << "\nperimeter = " << k << endl << endl;
		figures[i]->Display();
	}

	for (int i = 0; i < MAX; i++)
	{
		delete figures[i];
		figures[i] = nullptr;
	}

	_getch();
}