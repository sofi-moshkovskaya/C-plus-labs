//9.	Напишите прототип функции с именем Perimeter(),
//которая возвращает беззнаковое длинное целое и принимает два параметра типа int.

//10.	Напишите определение функции Perimeter(), вычисляющую периметр прямоугольника.

#include <iostream>
using namespace std;

long unsigned int Perimeter(int length, int width); //прототип

void main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	cout << Perimeter(a, b);
	cin.get(); cin.get();
}

long unsigned int Perimeter(int length, int width) //определение функции
{
	return 2 * (length + width);
}