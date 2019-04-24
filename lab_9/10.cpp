//10.	—оздайте в свободной пам€ти три объекта различных типов(Cat, Worker, PencilЕ).
//«амените указатели ссылками и выполните обработку этих объектов.
//ќсвободите свободную пам€ти, примен€€ указатели.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <conio.h>
using namespace std;
class Worker
{
public:
	double age = 0, salary = 0;
	string sex = " ";
};
class Cat
{
public:
	bool meow = 0;
	int age = 0;
	double weight = 0;
};
class Pencil
{
public:
	int price = 0, lenght = 0;
	string name = " ";
};

void main()
{
	setlocale(LC_ALL, "Russian");
	Cat * pCat = new Cat;
	Pencil * pPencil = new Pencil;
	Worker * pWorker = new Worker;

	Cat &rVasya = *pCat;
	Pencil & rRed = *pPencil;
	Worker &rMihaluch = *pWorker;

	rVasya.age = 4, rVasya.weight = 2.5;
	rMihaluch.sex = "мужской", rMihaluch.salary = 5000, rMihaluch.age = 50;
	rRed.price = 150, rRed.name = "Koh-I-Noor", rRed.lenght = 10;

	delete pCat, pCat = 0;
	delete pWorker, pWorker = NULL;
	delete pPencil, pPencil = NULL;
}