//4.	Ќапишите двум€ способами :
//Х	прототип функции дл€ вычислени€ квадрата, куба  и  обратного значени€ вещественного числа;
//Х	реализацию этой функции;
//Х	драйвер дл€ ее проверки.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
using namespace std;

void calc(double *, double *, double *, double *);
void calc1(double &, double &, double &, double &);

void main()
{
	double numb = 0, sqr=0, cube=0, rev=0;
	cout << "Input your digital  ";
	cin >> numb;
	calc(&numb, &sqr, &cube, &rev);
	cout << "Before: " << numb << "\tSquared: " << sqr << "\nCubed: " << cube << "\tReverse value: " << rev << endl << endl;
	
	calc1(numb, sqr, cube, rev);
	cout << "Before: " << numb << "\tSquared: " << sqr << "\nCubed: " << cube << "\tReverse value: " << rev << endl << endl;
	_getch();
}

void calc(double *number, double *square, double *cube, double *reverse)
{
	*square = *number * *number;
	*cube = pow(*number, 3);
	*reverse = 1 / *number;
}
void calc1(double &number, double &square, double &cube, double &reverse)
{
	square = number * number;
	cube = pow(number, 3);
	reverse = 1 / number;
}