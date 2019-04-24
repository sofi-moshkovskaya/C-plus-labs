/*Напишите объявление класса Rectangle (прямоугольник), который является производным от Square (квадрат), который,
в свою очередь – производный от Shape(фигура). В классе Shape объявите следующие защищенные члены-данные : 
цвет линий фигуры и толщина ее линий  и напишите 2 конструктора - по умолчанию и с параметрами. 
В классах Square и Rectangle объявите закрытые (защищенные)  члены-данные для хранения размеров каждой из фигур, несколько конструкторов, 
вызывающих конструкторы базового класса, а также методы для вычисления площади и периметра фигур. 
В классе Rectangle обязательно используйте перекрывание методов базового класса Square. При необходимости добавьте в классы  методы доступа. 
Напишите главную программу, в которой выполните создание объектов-фигур различных типов и их обработку.

Moshkovskaya Sophia 
18.02.19*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


class Shape
{
public:
	Shape() :colour("red"), thickness(1) {};
	Shape(string col, double thickness) : colour(col), thickness(thickness) {};
	~Shape() {};

	void Display()
	{
		cout << "Square \ncolour: " << colour << "\tthickness: " << thickness << endl << endl;};

protected:
	string colour;
	double thickness;
};

class Square:public Shape
{
public:
	Square() : Shape(), lenght(10) {};
	Square(double len) : Shape(), lenght(len) {};
	Square(string col, double thickness, double len) { Shape(col, thickness); lenght = len; };
	~Square() {};

	double Perimetr() { return lenght * 4; };
	double Area() { return lenght * lenght; };

	void Display() 
	{ cout << "Square \nlendht: " << lenght << "\narea; " << Area() << "\tperimeter; " << Perimetr() 
		<< "\tcolour: " << colour << "\tthickness: " << thickness << endl << endl;};

	double lenght;
};

class Rectangle:public Square
{public:
	Rectangle() : Square(), width(5), lenght(12) {};
	Rectangle(double wid, double len) : Square(len), width(wid) {};
	Rectangle(string col, double thickness, double len, double wid) : Square(col,thickness,len), width(wid) {};
	~Rectangle() {};

	double Perimetr() { return 2*(lenght+width); };
	double Area() { return lenght * width; };

	void Display() 
	{ cout << "Rectangle \nwidth: " << width << "\tlendht: "
		<< lenght << "\narea: " << Area() << "\tperimeter: " << Perimetr() 
		<< "\tcolour: " << colour << "\tthickness: " << thickness << endl << endl;};


protected:
	double width, lenght;
};

void main()
{
	Square shape1("orange", 4.5, 11), shape(6);
	Rectangle shape2, shape3(16, 4);
	Shape shape4("blue",2.3);

	shape.Display(); shape1.Display();
	shape2.Display(); shape3.Display(); shape4.Display();


	_getch();
}