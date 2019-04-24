//задания 1-6
//Мошковская София 10.10.2018
//15.	Запишите тоже самое, используя тройную операцию

#include <iostream>
using namespace std;

void main()
{
	int a = 13, b = 17, c=2;
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	if (a > c && b > c)
	{
		a = c, b = c;
		cout << "\na>c, b>c\n" << "a = " << a << "\tb = " << b <<"\tc = " << c << endl;
	}

	else if (b > a && c > a)
	{
		b = a, c = a;
		cout << "\nb>a, c>a\n" << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	}

	else
	{
		a = b, c = b;
		cout << "\na>b, c>b\n" << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	}
	cin.get();
}