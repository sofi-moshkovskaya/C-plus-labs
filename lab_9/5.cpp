//5.	Ќапишите двум€ способами :
//Х	прототип функции дл€ вычислени€ длины окружности, площади круга  и объема шара, если известен радиус;
//Х	реализацию этой функции;
//Х	драйвер дл€ ее проверки.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;


void calculate(double *, double *, double *, double *);
void calc(double &, double &, double &, double &);

void main()
{
	double rad = 0, len = 0, area = 0, vol = 0;
	cout << "Input radius:  ";
	cin >> rad;
	calc(rad, len, area, vol);
	cout << "Radius: " << rad << "\tCirciut: " << len << "\tArea of a circle: " << area << "\tVolume:" << vol << endl << endl;

	calculate(&rad, &len, &area, &vol);
	cout << "Radius: " << rad << "\tCirciut: " << len << "\tArea of a circle: " << area << "\tVolume:" << vol << endl << endl;
	_getch();
}

void calculate(double *radius, double *lenght, double *area, double *volume)
{
	*lenght = 2 * M_PI * *radius;
	*area = M_PI * pow(*radius, 2);
	*volume = 4 / 3.*M_PI* pow(*radius, 3);
}
void calc(double & radius, double &lenght, double &area, double &volume)
{
	lenght = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);
	volume = 4 / 3.*M_PI* pow(radius, 3);
}