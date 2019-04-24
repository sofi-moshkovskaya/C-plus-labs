//9.	Создайте объект любого ранее разработанного класса(Cat, Worker, Pencil…) в стеке.Затем указатель на него.
//Измените и распечатайте значение этого объекта с помощью указателя.
// Moshkovskaya Sophiia 28.11.18

#include <iostream>
#include <conio.h>
#include "Cat.h"
using namespace std;

void main()
{
	Cat c1, c2;
	Cat *pc1 = &c1;
	Cat *pc2 = &c2;
	cout << "Cat is " << pc1->GetAge() <<" years old, its weight " 
		<< pc1->GetWeight() << " kg.\nCan it say 'meow' ?  " << pc1->GetMeow() << endl << endl;

	pc1->SetAge(5),	pc1->SetWeight(7.8), pc1->SetMeow(0);
	pc1->SetAge(2), pc1->SetWeight(3), pc1->SetMeow(1);
	 
	cout << "Cat #1 is " << pc1->GetAge() << " years old, its weight "
		<< pc1->GetWeight() << " kg.\nCan it say 'meow' ?  " << pc1->GetMeow() << endl << endl;
	
	cout << "Cat #2 is " << pc2->GetAge() << " years old, its weight "
		<< pc2->GetWeight() << " kg.\nCan it say 'meow' ?  " << pc2->GetMeow() << endl;
	_getch();
}