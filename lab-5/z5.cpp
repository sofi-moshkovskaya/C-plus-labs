//5.	Напишите программу, определяющую большее из трех случайных чисел.
//Мошковская София 24.10.2018

#include <iostream>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
	int a, b, c, m;
	srand(time(0));
	a = rand();
	b = rand();
	c = rand();
	m = max(max(a, b), c);
	cout << m << endl;
	system("pause");
	return 0;
}