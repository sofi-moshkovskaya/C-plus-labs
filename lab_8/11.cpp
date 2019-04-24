//11.	Ќапишите программу, создающую вис€щий указатель на объект любого 
//ранее разработанного класса(Cat, Worker, PencilЕ).ќбъ€сните как ее исправить.
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
	Worker *pworker; //вис€щий указатель
	//Worker *pworker = new Worker;

	Worker *pworker = new Worker;
	delete pworker;//вис€щий, необнуленный указатель

	if (pworker == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	pworker->age = 30, pworker->salary = 3200, pworker->experience = 2.7, pworker->sex = 'm';

	cout << "Workers age is " << pworker->age << " years\nGender: " << pworker->sex << "\nHis experience " << pworker->experience
		<< " years" << "\nHis salary " << pworker->salary;
	delete pworker; //вис€щий указатель
	//pworker = NULL;
	_getch();
}