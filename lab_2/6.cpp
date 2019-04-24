/*Напишите прототип функции для вычисления средней зарплаты трех человек.Напишите ее реализацию.
Вызовите ее из главной функции.
Мошковская София 26.09.2018*/

#include <iostream> 
using namespace std;

int add(int x, int y, int z);

int main()
{
	cout << "Enter the salary of three (integer) than press `ENTER` " << endl;
	int x, y, z;
	cin >> x >> y >> z;		
	cout << "Avarage = " << add(x, y, z) / 3. << endl;
	cin.get();
}

int add(int x, int y, int z)
{
	return x + y + z;
}