//17.	Напишите функцию, возвращающую меньшее из двух чисел и с ее помощью определите меньшее из 5 чисел.
//Мошковская София 11.10.2018

#include <iostream>
using namespace std;

double min(double a, double b);

void main()
{
	double a = 0, b = 0, c = 0, d = 0, e = 0;
	cout << "Input 5 numbers ";
	cin >> a >> b >> c >> d >> e;
	cout << "Min = ";
	cout << min(min(min(a, b), min(c, d)), e);
	cin.get(); cin.get();
}

double min(double a, double b)
{
	if (a < b)
		return a;
	else
		return b;
}