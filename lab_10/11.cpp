//11.	Измените класс Circle так, чтобы itsX, itsY, itsRadius создавались в свободной памяти.
//Откорректируйте конструкторы, деструктор и  методы этого класса. 

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>
using namespace std;

class Circle
{
	int* pitsX;
	int* pitsY;
	int* pitsRadius;
public:
	Circle();
	Circle(int, int, int);
	Circle(int);
	Circle(const Circle&);
	~Circle();

	//методы доступа
	int setX(int);
	int getX()const { return *pitsX; };
	int setY(int);
	int getY()const { return *pitsY; };
	int setRadius(int);
	int getRadius()const { return *pitsRadius; };

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

int Circle::setX(int x) {
	return *pitsX = x;
}

int Circle::setY(int y) {
	return *pitsY = y;
}

int Circle::setRadius(int r) {
	return *pitsRadius = r;
}

Circle::~Circle()
{
	delete pitsX;
	delete pitsY;
	delete pitsRadius;
	pitsX = nullptr, pitsY = nullptr, pitsRadius = nullptr;
}

Circle::Circle()
{
	pitsX = new int(0);
	pitsY = new int(0);
	pitsRadius = new int(0);

	if (pitsX == nullptr) {
		cout << "Error! No memory for X!!!\n";
		return;
	}
	if (pitsY == nullptr) {
		cout << "Error! No memory for Y!!!\n";
		return;
	}
	if (pitsRadius == nullptr) {
		cout << "Error! No memory for Radius!!!\n";
		return;
	}
}


Circle::Circle(int x, int y, int r = 20)
{
	pitsX = new int(x);
	pitsY = new int(y);
	pitsRadius = new int(r);

	if (pitsX == nullptr) {
		cout << "Error! No memory for X!!!\n";
		return;
	}
	if (pitsY == nullptr) {
		cout << "Error! No memory for Y!!!\n";
		return;
	}
	if (pitsRadius == nullptr) {
		cout << "Error! No memory for Radius!!!\n";
		return;
	}

}

Circle::Circle(int a)
{
	int x, y, r;
	cout << "Enter X, Y and Radius of a circle ";
	cin >> x >> y >> r;
	
	if (pitsX == nullptr) {
		cout << "Error! No memory for X!!!\n";
		return;
	}
	if (pitsY == nullptr) {
		cout << "Error! No memory for Y!!!\n";
		return;
	}
	if (pitsRadius == nullptr) {
		cout << "Error! No memory for Radius!!!\n";
		return;
	}
	*pitsX = x;
	*pitsY = y;
	*pitsRadius = r;
}

Circle:: Circle(const Circle &c)
{
	cout << "Copy constructor has worked here." << endl;
}

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

void main()
{
	Circle circle1, circle2(10, 10, 25), circle3(1), circle4(circle2);

	double lenght = 0, square = 0, volume = 0;

	CalcRad(lenght, square, volume, circle1);
	cout << "Circle 1\n" << "Lenght = " << lenght << "\tSquare = " << square << "\tVolume = " << volume << endl << endl;

	CalcRad(lenght, square, volume, circle2);
	cout << "Circle 2\n" << "Lenght = " << lenght << "\tSquare = " << square << "\tVolume = " << volume << endl << endl;

	CalcRad(lenght, square, volume, circle3);
	cout << "Circle 3\n" << "Lenght = " << lenght << "\tSquare = " << square << "\tVolume = " << volume << endl << endl;

	cout << circle2.getX() << circle4.getX();

	_getch();
}

const Circle& Circle:: operator ++() //prefix
{
	++*pitsRadius;
	return *this;
}
const Circle& Circle:: operator ++(int) //postfix
{
	++*pitsRadius;
	return *this;
}
const Circle& Circle:: operator --() //prefix
{
	--*pitsRadius;
	return *this;
}
const Circle& Circle:: operator --(int) //postfix
{
	--*pitsRadius;
	return *this;
}

Circle Circle::operator +(const Circle & c)
{
	Circle tmp;
	tmp.setRadius(*pitsRadius + c.getRadius());
	return  tmp;
}
Circle Circle::operator -(const Circle & c)
{
	Circle temp;
	temp.setRadius(*pitsRadius - c.getRadius());
	return  temp;
}

int Circle::operator <(const Circle& c)
{
	if (*pitsRadius < c.getRadius())
		return 1;
	else
		return 0;
}

bool Circle::operator ==(const Circle& c)
{
	if (*pitsRadius == c.getRadius())
		return true;
	else
		return false;
}