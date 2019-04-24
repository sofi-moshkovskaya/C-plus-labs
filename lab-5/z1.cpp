//1.	Вычислить корни квадратного уравнения вида ax2 + bx + c = 0 по формуле
//Мошковская София 23.10.2018

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
	cout << "Input a,b,c\t";
	cin >> a >> b >> c;
	cout << "\n" << a << "x2 + " << b << "x + " << c << " = 0" << endl;
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	cout << "\nx1 = " << x1 << "\nx2 = " << x2;
	_getch();
	return 0;
}