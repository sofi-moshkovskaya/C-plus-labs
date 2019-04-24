//1.	Напишите объявление закрытого класса Circle с следующими переменными - членами : 
//координаты центра и радиус(itsX, itsY, itsRadius).Включите в класс конструктор по умолчанию, деструктор и методы доступа.
//Moshkovskaya Sophia 14.12.18

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>
using namespace std;

class Circle
{
	int itsX, itsY, itsRadius;
public:
	Circle();
	Circle(int, int, int);
	Circle(int);
	Circle(const Circle&);
	~Circle();

	//методы доступа
	void setX(int);
	int getX()const { return itsX; };
	void setY(int);
	int getY()const { return itsY; };
	void setRadius(int);
	int getRadius()const { return itsRadius; };
	
	//операторы
	const Circle& operator ++();
	const Circle& operator ++(int);
	const Circle& operator --();
	const Circle& operator --(int);
	Circle operator +(const Circle&);
	Circle operator -(const Circle&);
	int operator <(const Circle& c);
	bool operator ==(const Circle& c);
};

void Circle:: setX(int x){
	itsX = x;
}

void Circle::setY(int y) {
	itsY = y;
}

void Circle:: setRadius(int r) {
	itsRadius = r;
}

Circle::~Circle(){}

//2.	Напишите реализацию конструктора по умолчанию, инициализируя itsRadius числом 20,
//а X и Y – числом 100.
Circle:: Circle()
{
	itsX = 100;
	itsY = 100;
	itsRadius = 20;
}

//3.	Добавьте второй конструктор, который принимает координаты центра и радиус 
//как параметры и инициализирует itsX, itsY, itsRadius.Причем радиус может иметь значение по умолчанию равное 20.
Circle::Circle(int x, int y, int r = 20)
{
	itsX = x;
	itsY = y;
	itsRadius = r;
}


//4.	Добавьте третий конструктор, который вводит координаты центра и радиус с клавиатуры 
//или считывает их из заранее подготовленного текстового файла на магнитном диске
//и присваивает значения  itsX, itsY, itsRadius.
Circle::Circle(int a)
{
	int x, y, r;
	cout << "Enter X, Y and Radius of a circle ";
	cin >> x >> y >> r;
	itsX = x;
	itsY = y;
	itsRadius = r;
}

//5.	Напишите конструктор копирования для класса Circle, который будет нам сообщать о своем выполнении.
/*Circle:: Circle (const Circle &c)
{
	cout << "Copy constructor has worked here." << endl;
}*/

//6.	Напишите перегруженные методы для вычисления длины окружности, площади круга и объема шара
//как для объекта с радиусом itsRadius, так и для произвольного радиуса.
void CalcRad(double& rlenght, double& rsuqare, double& rvolume, Circle cir)
{
	int rad = cir.getRadius();
	rlenght = 2 * M_PI*rad;
	rsuqare = M_PI * pow(rad, 2);
	rvolume = 4 / 3.*M_PI*pow(rad, 3);
}
void Calc(double& rlenght, double& rsuqare, double& rvolume, int rad) 
{
	rlenght = 2 * M_PI*rad;
	rsuqare = M_PI * pow(rad, 2);
	rvolume = 4 / 3.*M_PI*pow(rad, 3);
}

//7.	Напишите программу в которой создается 4 объекта Circle – три в стеке, а один в свободной памяти.
//Первый конструктором по умолчанию, второй - конструктором с параметрами, третий – путем ввода с клавиатуры,
//четвертый – путем чтения данных из файла.Выполните вычисления и распечатки с помощью методов класса.

void main()
{
	Circle circle1;
	Circle circle2(10, 10, 25);
	Circle circle3(1);

	double lenght = 0, square = 0, volume = 0;

	CalcRad(lenght, square, volume, circle1);
	cout << "Circle 1\n" << "Lenght = " << lenght << "\tSquare = " << square << "\tVolume = " << volume << endl << endl;

	lenght = 0, square = 0, volume = 0;
	CalcRad(lenght, square, volume, circle2);
	cout << "Circle 2\n" << "Lenght = " << lenght << "\tSquare = " << square << "\tVolume = " << volume << endl << endl;
	
	lenght = 0, square = 0, volume = 0;
	CalcRad(lenght, square, volume, circle3);
	cout << "Circle 3\n" << "Lenght = " << lenght << "\tSquare = " << square << "\tVolume = " << volume << endl << endl;
/*
	cout << circle1.getRadius();
	circle1++;
	cout << circle1.getRadius() << endl;

	cout << circle2.getRadius();
	--circle2;
	cout << circle2.getRadius() << endl;
*/

	_getch();
}

//8.	Создайте в классе Circle префиксный и постфиксный операторы инкремента и декремента,
//воздействующие только на член - данное радиус itsRadius.

const Circle& Circle:: operator ++() //prefix
{
	++itsRadius;
	return *this;
}
const Circle& Circle:: operator ++(int) //postfix
{
	++itsRadius;
	return *this;
}
const Circle& Circle:: operator --() //prefix
{
	--itsRadius;
	return *this;
}
const Circle& Circle:: operator --(int) //postfix
{
	--itsRadius;
	return *this;
}

//9.	Создайте в классе Circle оператор + для сложения объектов типа Circle.
//Необходимо складывать только величины радиусов itsRadius.

Circle Circle::operator +(const Circle & c)
{
	Circle tmp;
	tmp.setRadius(itsRadius + c.getRadius());
	return  tmp;
}
Circle Circle::operator -(const Circle & c)
{
	Circle temp;
	temp.setRadius(itsRadius - c.getRadius());
	return  temp;
}

//10.	Создайте в классе Circle операторы < и = = для сравнения объектов типа Circle  по величине радиуса itsRadius.
int Circle::operator <(const Circle& c)
{
	if (itsRadius < c.getRadius())
		return 1;
	else
		return 0;
}
bool Circle::operator ==(const Circle& c)
{
	if (itsRadius == c.getRadius())
		return true;
	else
		return false;
}