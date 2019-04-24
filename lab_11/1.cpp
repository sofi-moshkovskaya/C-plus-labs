/*1.	Создайте массив из 1000 случайных чисел из диапазона от 1 до 100. 
Выведите его на экран по 6 чисел в строке.Увеличьте все значения в массиве вдвое.
Определите количество четных и нечетных чисел в этом массиве.
Подсчитайте сумму и среднее арифметическое элементов массива.
Найдите в массиве наименьшее(наибольшее) число.

Moshkovskaya Sophia
01.02.19

*/

#include <iostream>
using namespace std;
#include <conio.h>
#include <stdlib.h>
#include <ctime>

const int MAX = 1000;

void main()
{
	int Array[MAX];
	int even = 0, odd = 0, sum = 0, min, max;
	double avarage = 0;

	srand(time(NULL));

	cout << "Initial array" << endl;
	for (int i = 0; i < MAX; ++i)
	{
		Array[i] = rand() % 100;
		cout << Array[i] << "\t";

		if (i % 6 == 0)
			cout << "\n";
	}


	for (int i = 0; i < MAX; ++i)	//array is doubled
	{
		Array[i] *= 2;

		if (Array[i] % 2 == 0)		//evens and odds are counted
			even += 1;
		else odd += 1;

		sum += Array[i];			//sum is counted
	}

	avarage = (double)sum / MAX;

	int i = 0;
	min = Array[i];
	max = Array[i];
	for (i; i < MAX; ++i)			// min and max
	{
		if (min > Array[i])
			min=Array[i];

		if (max < Array[i])
			max = Array[i];
	}

	cout << "\n\n" << "Sum = " << sum << "\nAvarage = " << avarage 
		<<"\nEvens: " << even << "\nOdds: " << odd 
		<< "\nMin = " << min << "\nMax = " << max << endl;


	_getch();
}