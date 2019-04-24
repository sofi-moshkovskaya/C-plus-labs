/*1.	Напишите программу, работающую со всеми четырьмя стандартными объектами iostream.

Moshkovskaya Sophia 
18.03.2019*/



#include <iostream>
#include <conio.h>
using namespace std;

//в классе создаются 4 объекта: cin, cout, cerr, clog

void main()
{
	int number = 0;

	cout << "Input natural number:  ";
	cin >> number;

	if (number <= 0)
		cerr << "Error!!!  the number must be natural..." << endl;
	else
	{
		if (number % 2 == 0)
			clog << "The number is even!" << endl;
		else
			clog << "The number is odd!" << endl;
	}
	_getch();
}