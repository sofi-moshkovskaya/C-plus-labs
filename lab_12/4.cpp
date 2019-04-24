//4.	Объявите в главной программе два указателя типа Shape и создайте два объекта типа Square и Rectangle в свободной памяти,
//сохранив их адреса в этих указателях.Выполните обработку объектов путем вызова как виртуальных, так и не виртуальных методов классов.
//Уничтожьте объекты и обнулите их указатели.


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


	virtual 
		void Display()
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
	Shape* square = new Square(11);
	Shape* rect = new Rectangle("purple", 4.12, 8, 1);

	double per = square->Perimetr();
	double area = rect->Area();

	cout << per <<"   "<< area << endl;

	square->Display();
	rect->Display();

	delete square, rect;
	square = 0, rect = 0;

	_getch();
}