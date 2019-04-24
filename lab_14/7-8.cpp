/*
7.	Напишите небольшую программу с объявлением класса, имеющего одну переменную - член  и одну статическую переменную - член.
Пусть конструктор инициализирует переменную - член и инкрементирует статическую переменную член, а деструктор – декрементирует ее.
8.	Напишите драйвер к п.7, в котором создается три объекта и на экран выводятся значения обычной и статической переменных членов класса.
Уничтожьте эти объекты и проследите как будет меняться значение статической переменной члена.

Moshkovskaya Sophia
27.02.2019
*/

#include<iostream>
#include <conio.h>
using namespace std;


class Square
{
	
public:
	int lenght;
	static int amount;
	
	Square() : lenght(10) { amount++; }
	virtual ~Square() { amount--; }

	void Display() { cout << "Square lenght is " << lenght << " cm." << endl; }
};

int Square::amount = 0;


//8.	Напишите драйвер к п.7, в котором создается три объекта и на экран выводятся значения обычной и статической переменных членов класса.
//		Уничтожьте эти объекты и проследите как будет меняться значение статической переменной члена.
int main()
{
	cout << "There are " << Square::amount << " squares" << endl;

	Square* s1 = new Square;
	Square* s2 = new Square;
	Square* s3 = new Square;
	s1->Display(); s2->Display(); s3->Display();
	cout << "There are " << Square::amount << " squares";

	delete s1, s2, s3;
	s1 = 0; s2 = 0; s3 = 0;

	_getch();
	return 0;
}