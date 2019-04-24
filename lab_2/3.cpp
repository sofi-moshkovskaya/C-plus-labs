/*Ќапишите 3- варианта программы дл€ вычислени€ суммы, разности, произведени€, частного, среднего значени€ двух целых чисел  a и b и вывода результатов на экран:
a)	числа a и b проинициализировать;
b)	числам a и b присвоить значени€;
ћошковска€ —офи€, 26.09.2018*/

#include <iostream>
using namespace std;

int main()
{
	int a; // инициализаци€ переменных
	int b;
	a = 13; //присваивание значени€ переменным
	b = 4;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "Sum = " << a + b << endl << "Difference = " << a - b << endl;
	cout << "Product = " << a * b << endl << "Quotient = " << (double)a / b << endl;
	cout << "Avarage = " << (a + b) / 2 << endl;
	cin.get();
}