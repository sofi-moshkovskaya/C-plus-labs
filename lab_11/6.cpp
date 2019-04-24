/*6.	Объявите массив в свободной памяти для хранения объектов любого ранее разработанного класса(Worker, Pencil, Rectangle…).
Создайте несколько объектов и сохраните их в массиве.Распечатайте массив объектов.Подсчитайте количество объектов в массиве.
Определите сумму по одному из полей объекта.Найдите в массиве наименьший(наибольший) объект.
Уничтожьте  массив объектов.Для обхода используйте как индексы так и адресную арифметику.

Moshkovskaya Sophia
01.02.19*/

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
	void Print();
	bool operator > (const CAT&);
	bool operator < (const CAT&);
private:
	int age;
	int weight;
};

int Max(const CAT* array, int Max);

int main()
{
	const int N = 5;
	CAT* Group = new CAT[N];					//массив в свободной памяти
	CAT* pCat = Group;
	int i;
	int amount = 0;


	for (pCat, i = 0; i < N; pCat++, i++)
	{
		pCat->SetAge(5 * i + 1);				//установка парметров
		pCat->SetWeight(4 * i + 2);
		pCat->Print();							//вывод на экран
		amount += 1;							//подсчет количества

	}
		
	int sum = 0;
	for (i = 0; i < N; i++)		
	{
		sum = sum + Group[i].GetAge();
	}
	cout << "Sum of age " << sum << endl << endl;

	int imax = Max(Group, N);
	Group[imax].Print();


	delete [] Group;							//удаление массива
	Group = nullptr;
	pCat = nullptr;

	_getch(); _getch();
	return 0;
}

void CAT::Print()
{
	cout << "Cat`s age is " << GetAge() << endl;
	cout << "Cat`s  weight is " << GetWeight() << endl << endl;
}

bool CAT:: operator > (const CAT& rcat)
{
	if (age > rcat.GetAge()) return true;
	else return false;

	//if (weight > rcat.GetWeight()) return true;
	//else return false;
}

bool CAT:: operator < (const CAT& rcat)
{
	if (age < rcat.GetAge()) return true;
	else return false;

	//if (weight < rcat.GetWeight()) return true;
	//else return false;
}


int Max(const CAT* array, int Max)
{
	CAT max = *array;		 //current max
	int imax;				 //index of current max
	int i;

	for (i = 0; i < Max; ++i)
	{
		if (max < array[i])
		{
			max = array[i];
			imax = i;
		}
	}

	return imax;
}
