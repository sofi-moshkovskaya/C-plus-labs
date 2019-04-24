//3.	Измените классы Shape->Square->Rectangle из предыдущего задания на виртуальные.Для этого добавьте в класс Shape 
//пустые методы для вычисления площади и периметра и перекройте их виртуальными методами в производных классах.
//Не забудьте также и про виртуальные деструкторы.


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

	virtual double Perimetr() {};
	virtual double Area() {};


	void Display()
	{
		cout << "Square \ncolour: " << colour << "\tthickness: " << thickness << endl << endl;
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
		cout << "Square \nlendht: " << lenght << "\narea; " << Area() << "\tperimeter; " << Perimetr()
			<< "\tcolour: " << colour << "\tthickness: " << thickness << endl << endl;
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
		cout << "Rectangle \nwidth: " << width << "\tlendht: "
			<< lenght << "\narea: " << Area() << "\tperimeter: " << Perimetr()
			<< "\tcolour: " << colour << "\tthickness: " << thickness << endl << endl;
	};


protected:
	double width, lenght;
};

