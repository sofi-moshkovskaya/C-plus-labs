//4.	Записать на С++ формулы
//Мошковская София 23.10.2018

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	double x = 23, y = 54, z = 171;
	double r1 = 0, r2 = 0, r3 = 0;

	r1 = (log(fabs(x))) / (pow(fabs(x) + fabs(y), 1 / 3.));

	z1 = z * 3.14159 / 180;
	r2 = exp(x - y)*(pow(pow(tan(z1), 2) + 1, x));

	r3 = log10(sqrt(exp(x - y)) + pow(x, fabs(y)) + z);

	cout << r1 << "\n" << r2<< "\n" <<r3 << endl;
	system("pause");
	return 0;
}