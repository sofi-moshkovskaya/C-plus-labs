//6.	Введите с клавиатуры с помощью функции scanf() два числа(целое и вещественное) и 
//распечатайте их на экране при помощи функции printf(), если оба числа были введены правильно.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void  main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	float y = 0;

	printf("Введите целое и вещественное число через пробел\n");
	int kod=scanf_s("%d %f", &x, &y);
	
	if (kod==2)
	{
		printf("Целое число - %d", x);
		printf("\nВещественное число - %f", y);
	}
	else
		cout << "Введено неправильное число" << endl;
	_getch();
}