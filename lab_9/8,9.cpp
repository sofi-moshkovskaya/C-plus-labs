//8.	Напишите функцию, которая создает объект любого ранее разработанного класса(Cat, Worker, Pencil…) в 
//свободной памяти  и возвращает в качестве результата ссылку на объект.Проверьте ее.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
#include <string>
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

Cat* PCat();
Cat& RCat();

void main()
{
	Cat &rCat = RCat();
	if (&rCat == NULL)
		cout << "Error.";
	rCat.SetAge(5), rCat.SetWeight(5.78);
	cout <<"Cats age "<< rCat.GetAge() <<", weight "<< rCat.GetWeight() <<".\nCan it meow? "<< rCat.GetMeow();

	Cat*pCat1 = &rCat;
	delete pCat1;
	pCat1 = NULL;

	Cat *pCat = PCat();
	if (&pCat == NULL)
		cout << "Error.";
	pCat->SetAge(3), pCat->SetMeow(6);
	cout << "\nCats age " << pCat->GetAge() << ", weight " << pCat->GetWeight() << ".\nCan it meow? " << pCat->GetMeow();

	delete pCat;
	pCat = NULL;
	_getch();

}
Cat& RCat()
{
	Cat *pcat= new Cat;
	return *pcat;
}
Cat* PCat()
{
	Cat *pcat = new Cat;
	return pcat;
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
