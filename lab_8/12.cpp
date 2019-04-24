//12.	Напишите программу, создающую утечку памяти.Увеличьте скорость утечки памяти с помощью создания объектов 
//любого ранее разработанного класса(Cat, Worker, Pencil…).Объясните как ее исправить.
// Moshkovskaya Sophiia 28.11.18

#include <iostream>
#include <conio.h>
using namespace std;
class Worker
{
public:
	double age = 0, salary = 0, experience = 0;
	char sex = ' ';
};
void main()
{
	double *pnumber = 0;
	double a = 3;
	pnumber = &a;  // переименование указателя без удаления предыдушего, потеря прошлого адресса и утечка памяти

	while (1) {
		Worker *pworker = new Worker; //бесконечный цикл
		cout << "worker created!  ";
	}

	Worker *pworker = new Worker;
	//delete pworker;   //без удаления происходит утечка памяти
	//pworker = NULL;
	_getch();
}