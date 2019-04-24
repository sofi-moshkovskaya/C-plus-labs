//5.	Объявите массив указателей для работы с объектами любого ранее разработанного класса(Worker, Pencil, Rectangle…).
//Создайте несколько объектов в свободной памяти и сохраните их адреса в массиве указателей.Распечатайте массив объектов.
//Уничтожьте объекты.Для обхода используйте как индексы так и адресную арифметику.
//Moshkovskaya Sophia
//01.02.19

#include <iostream>
#include <conio.h>
using namespace std;

class CAT
{
public:
	CAT() { age = 1, weight = 5; };
	CAT(int a, int w) { age = a; weight = w; };
	~CAT() {};
	int GetAge() const { return age; }
	int GetWeight() const { return weight; }
	void SetAge(int a) { age = a; }
	void SetWeight(int w) { weight = w; }
private:
	int age;
	int weight;
};

int main()
{
	const int MAX = 7;
	CAT* Group[MAX]=new Cat;
	CAT* pCat = 0;

	for (int i = 0; i < MAX; ++i)
	{
		Group[i] = 0;
		pCat = new CAT;
		pCat->SetAge(i + 3);
		pCat->SetWeight(2*i);
	}

	for (int i = 0; i < MAX; ++i)
	{
		cout << "Cat " << i << " age is " << pCat->GetAge() << endl;
		cout << "Cat " << i << " weight is " << pCat->GetWeight() << endl << endl;
	}

	for (int i = 0; i < MAX; ++i)
	{
		delete pCat;
		pCat = 0;
	}
	_getch();
	return 0;
}