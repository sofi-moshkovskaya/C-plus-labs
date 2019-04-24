/*
8.	Возьмите небольшой класс из предыдущих упражнений.Обязательно включите в его состав дружественные операции извлечения и вставки в поток.
	Напишите программу, создающую 2 объекта этого класса(в стеке и в свободной памяти).Значения членов - данных этих объектов  введите 
	с клавиатуры оператором извлечения.Распечатайте содержимое этих объектов оператором вставки.

Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <conio.h>
using namespace std;

class Square
{
public:
	int lenght;
	int perimeter;
	int area;

	Square(int l) : lenght(l), perimeter(lenght * 4), area(lenght*lenght) {};
	~Square() {};


	const friend ostream& operator << (ostream& out, const Square& s)
	{
		cout << "Square lenght is " << s.lenght << " cm." << endl;
		cout << "Square perimeter is " << s.perimeter << " cm." << endl;
		cout << "Square area is " << s.area << " cm^2." << endl;
		return out;
	}

	friend istream& operator >>(istream& in, Square& s)
	{
		cout << "Input lenght of a square  ";
		cin >> s.lenght;
		return in;
	}

	void Func1() { perimeter = lenght * 4; cout << "Square perimeter is " << perimeter  << " cm." << endl; }
	void Func2() { area = lenght * lenght; cout << "Square area is " << area << " cm^2." << endl; }
};

void main()
{
	Square s1(5);
	Square* s2 = new Square(11);

	cin >> *(s2);
	s2->Func1(); s2->Func2();

	cout << endl<<s1;

	_getch();
}