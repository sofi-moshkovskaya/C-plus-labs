/*
3.	Напишите программу, выполняющую различные вычисления и  выводящую  значения с применение методов форматирования,
	манипуляторов и флагов объекта cout.


Moshkovskaya Sophia
18.03.2019*/

#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	double x = 3.75, y = -11.435, z = 2, a = 19.2, b = -33;
	double res = 0;

	res = 1000/(2 * x + 15 * b) / 4 + (y*y - z * x);

	
	cout << x << "\t" << b << endl;
	cout.width(10);
	cout.fill('*');

	//cout.fill(' ');

	cout.setf(ios::showbase); cout.setf(ios::showpos);
	cout << "Result:  " << res << "\thex:  " << hex << res << endl;


	cout <<"Scientific:  "<< scientific << res;

	_getch();
}