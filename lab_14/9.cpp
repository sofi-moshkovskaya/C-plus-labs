/*
9.	Сделайте статическую переменную п.7 - 8 приватной.Напишите и используйте статическую функцию - член для доступа к
	приватной статической переменной члену ?

Moshkovskaya Sophia
27.02.2019
*/

#include<iostream>
#include <conio.h>
using namespace std;


class Square
{
	static int amount;
public:
	int lenght;

	Square() : lenght(10) { amount++; }
	virtual ~Square() { amount--; }

	static int GetAmount() { return amount; }
	void Display() { cout << "Square lenght is " << lenght << " cm." << endl; }
};

int Square::amount = 0;


int main()
{
	Square* s1 = new Square;
	Square* s2 = new Square;
	Square* s3 = new Square;
	s1->Display(); s2->Display(); s3->Display();
	cout << "There are " << s1->GetAmount() << " squares";

	Square::GetAmount();

	delete s1, s2, s3;
	s1 = 0; s2 = 0; s3 = 0;

	_getch();
	return 0;
}