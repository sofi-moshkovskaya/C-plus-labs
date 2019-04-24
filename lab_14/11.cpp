/*
11.	Добавьте еще две переменные - члена в класс.Включите функции доступа,
	обеспечив при этом всем функциям - членам одинаковый тип возврата и сигнатуры.Используйте указатель на
	функцию - член для доступа к этим функциям.

Moshkovskaya Sophia
27.02.2019
*/

#include<iostream>
#include <conio.h>
using namespace std;


class Square 
{
	static int amount;
public:
	int lenght;
	int perimeter;
	int area;

	Square(int l) : lenght(l), perimeter(lenght*4), area(lenght*lenght) { amount++; }
	~Square() { amount--; }


	void Func1() { cout << "Square perimeter is " << perimeter << " cm." << endl; }
	void Func2() { cout << "Square area is " << area << " cm^2." << endl; }

	int GetAmount() { return amount; }

	void Display() { cout << "Square lenght is " << lenght << " cm." << endl;
					 cout << "Square perimeter is " << perimeter << " cm." << endl;
					 cout << "Square area is " << area << " cm^2." << endl;}
};
int Square::amount = 0;

int main()
{
	Square s1(9);
	int choice;
	
	void(*pFunc)();		//creating a pointer

	cout << "What must be done?" << endl << "1-perimeter, 2-area, else-show info." << endl;
	cin >> choice;

	switch (choice)
	{
	case 1: pFunc = s1.Func1; pFunc(); break;
	case 2: pFunc = s1.Func2; pFunc(); break;
	default: pFunc = s1.Display; pFunc(); break;
	}


	_getch();
	return 0;
}