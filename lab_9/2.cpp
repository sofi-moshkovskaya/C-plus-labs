//2.	Создайте объект любого ранее разработанного класса(Cat, Worker, Pencil…) в стеке.
//Затем ссылку и указатель на него.
//Измените и распечатайте значение этого объекта с помощью указателя и ссылки.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
using namespace std;

class Cat
{
	bool meow = 0;
	int age = 0;
	double weight = 0;
public:
	Cat();
	~Cat();
	void SetAge(int);
	void SetWeight(double);
	void SetMeow(int);
	int GetAge() const { return age; };
	double GetWeight() const { return weight; };
	bool GetMeow() const { return meow; };
};

void main()
{
	//С помощью ссылки
	Cat kitty;
	Cat &rkitty = kitty;

	rkitty.SetAge(3), rkitty.SetWeight(3.5), rkitty.SetMeow(3);

	cout << "Cat #1 is " << rkitty.GetAge() << " years old, its weight "
		<< rkitty.GetWeight() << " kg.\nCan it say 'meow' ?  " << rkitty.GetMeow() << endl << endl;

	//С помощью указателя
	Cat c1;
	Cat *pc1 = &c1;

	pc1->SetAge(7), pc1->SetWeight(7.8), pc1->SetMeow(0);

	cout << "Cat #2 is " << pc1->GetAge() << " years old, its weight "
		<< pc1->GetWeight() << " kg.\nCan it say 'meow' ?  " << pc1->GetMeow() << endl << endl;

	_getch();
}

Cat::Cat() {
	age = 0, weight = 0, meow = 0;
}
Cat::~Cat() { ; }
void Cat::SetAge(int a) {
	age = a;
}
void Cat::SetWeight(double w) {
	weight = w;
}
void Cat::SetMeow(int m) {
	meow = m;
}
