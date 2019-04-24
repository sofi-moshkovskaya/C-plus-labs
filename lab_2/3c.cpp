/*Напишите 3- варианта программы для вычисления суммы, разности, произведения, частного, среднего значения двух целых чисел  a и b и вывода результатов на экран:
c)	значения чисел a и b ввести с клавиатуры.
Мошковская София, 26.09.2018*/

#include <iostream>
using namespace std;

int main()
{
	int a; 
	int b;
	cout << "Enter integer a, b then press `ENTER`" << endl;
	cin >> a >> b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "Sum = " << a + b << endl << "Difference = " << a - b << endl;
	cout << "Product = " << a * b << endl << "Quotient = " << (double)a / b << endl;
	cout << "Avarage = " << (a + b) / 2 << endl;
	cin.get();
	cin.get();
}