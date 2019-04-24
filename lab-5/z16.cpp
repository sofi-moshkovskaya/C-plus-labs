//16.	Напишите и проверьте работу void - функции  для удваивания числа, используя механизм передачи параметров  по значению.
//Убедитесь в неправильности ее работы.

#include <iostream>
using namespace std;

void x2(double &a);

void main()
{
	double n;
	cout << "Input digital" << endl;
	cin >> n;
	x2(n);
	cout << n;
	system("pause");
}

void x2(double &a)
{
	a = a * 2;
}