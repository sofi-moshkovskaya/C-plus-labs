//17.	Перепишите п.16, применив механизм С++ для передачи параметров по ссылке.

#include <iostream>
using namespace std;

void x2(double &a);

void main()
{
	double a;
	cout << "Input digital" << endl;
	cin >> a;
	cout << x2(a) << endl;
	system("pause");
}

void x2(double &a)
{
	a = a * 2;
}