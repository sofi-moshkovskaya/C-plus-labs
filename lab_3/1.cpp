/*1.	Какого типа переменные подойдут для хранения следующей информации.
Объявите и проинициализируйте эти переменные, дав имен смысловые имена. Вывестина экран.

Мошковская София, 03.10.2018*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Age = 17;
	int Pop = 250000;
	double SZ = 23476.2387;
	double lenght1 = 51.34;
	double stars = 400e9;
	string scolor("Red");
	bool smoking = false;
	double lenght2 = 84.13;

	cout << "Age = " << Age << "\nColor = " << scolor << "\nPopulation = " << Pop << "\nAvarage salary = " << SZ << "\nLenght (mm) = " << lenght1 << "\nAmount of stars = " << stars << "\nDo u smoke ? " << smoking << "\nLenght (cm) = " << lenght2 << endl;
	cin.get();
	return 0;
}