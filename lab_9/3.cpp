//3.	Создайте объект любого ранее разработанного класса(Cat, Worker, Pencil…) в свободной памяти.
//Затем ссылку и указатель на него.
//Измените и распечатайте значение этого объекта с помощью указателя и ссылки.
//Moshkovskaya Sophia 04.12.2018

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
	Worker *pworker = new Worker;
	if (pworker == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	//С помощью ссылки
	Worker &rwork = *pworker;
	rwork.age = 43, rwork.experience = 17, rwork.salary = 13000, rwork.sex = 'f';
	cout << "Workers age is " << rwork.age << " years\nGender: " << rwork.sex
		<< "\nHis experience is " << rwork.experience
		<< " years" << "\nHis salary: " << rwork.salary <<"$"<< endl << endl;

	//С помощью указателя
	pworker->age = 30, pworker->salary = 3200, pworker->experience = 2.7, pworker->sex = 'm';
	cout << "Workers age is " << pworker->age << " years\nGender: " << pworker->sex 
		<< "\nHis experience is" << pworker->experience
		<< " years" << "\nHis salary: " << pworker->salary << "$" << endl << endl;
	delete pworker;
	pworker = NULL;
	_getch();
}