//2.	Вычислить третью сторону треугольника, если известны две другие и угол между ними в градусах по формуле
//Мошковская София 23.10.2018

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 0, b = 0, c = 0, ygol = 0;
	cout << "Введите две стороны треугольника и угол между ними (до 180°) ";
	cin >> b >> c >> ygol;
	ygol = ygol * 3.14159 / 180;
	a = sqrt(pow(b,2) + pow(c,2) - (2 * b * c *cos(ygol)));
	cout << "\nТретья сторона = " << a << endl;
	system("pause");
	return 0;
}