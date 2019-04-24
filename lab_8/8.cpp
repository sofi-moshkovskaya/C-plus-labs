//8.	Создайте объект целого типа в стеке.Затем указатель на него.Измените и распечатайте значение этого объекта с помощью указателя.
// Moshkovskaya Sophiia 28.11.18

#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int *pa = &a;
	cout << "Было " << *pa << pa << (unsigned long)pa << &a <<&pa << endl;
	*pa = 18;
	cout << "Стало " << *pa;
	_getch();
}