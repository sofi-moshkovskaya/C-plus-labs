//5	Напишите программу вычисления суммы и произведения чисел, вводимых с клавиатуры :
//a)	количество чисел предварительно вводится с клавиатуры;
//b)	вычисления прекращаются по запросу программы.
//Мошковская София 20.11.18

#include <iostream>
using namespace std;

void main()
{
	int n = 0;
	cout << "Input the amount of numbers:  ";
	cin >> n;

	int summ = 0, comp = 1;
	for (int i = 1; i <= n;i++)
	{
		int numb;
		cout << "Input digital\t";
		cin >> numb;
		summ = summ + numb;
		comp = comp * numb;

	/*	bool stop = false;
		cout << "Do you want to continue?\n'1' if YES\t'0' if NO" << endl;
		cin >> stop;
		cin.ignore();
		if (stop == false) {
			break;
		}*/
	}
	cout << "Sunn is " << summ << "\nComposition is " << comp << endl;
	cin.get();

	bool stop = true;
	summ = 0, comp = 1;
	do
	{
		int numb;
		cout << "Input digital\t";
		cin >> numb;
		summ = summ + numb;
		comp = comp * numb;

		cout << "Do you want to continue?\n'1' if YES\t'0' if NO" << endl;
		cin >> stop;
	} while (stop);

		cout << "Sunn is " << summ << "\nComposition is " << comp << endl;
		cin.get();
}