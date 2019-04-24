//4.	Напишите небольшую программу, в которой объявляются целое и указатель на целое.
//Присвойте адрес целого указателю.С помощью указателя установите значение целой переменной.
// Moshkovskaya Sophiia 28.11.18

#include <iostream>
using namespace std;
void main()
{
	int celoe = 45;
	int *pceloe = 0;
	pceloe = &celoe;
	*pceloe = 23;
}