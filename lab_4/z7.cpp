//задания 1-6
//Мошковская София 10.10.2018
//7.	Запишите правильно математические выражения на С++

#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

void main()
{
	int x = 15, y = 21, z = -4;
	double n = 0, m = 0;
	n = x + pow(y, 3) / (x + pow(y, 3) / (x + pow(y, 3)));
	cout << n << endl;

	m = (y - x)*(y - z / (y - x)) / (1 + pow(y - x, 2));
	cout << m << endl;
	cin.get();
}