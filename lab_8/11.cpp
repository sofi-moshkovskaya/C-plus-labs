//11.	�������� ���������, ��������� ������� ��������� �� ������ ������ 
//����� �������������� ������(Cat, Worker, Pencil�).��������� ��� �� ���������.
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
	Worker *pworker; //������� ���������
	//Worker *pworker = new Worker;

	Worker *pworker = new Worker;
	delete pworker;//�������, ������������ ���������

	if (pworker == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	pworker->age = 30, pworker->salary = 3200, pworker->experience = 2.7, pworker->sex = 'm';

	cout << "Workers age is " << pworker->age << " years\nGender: " << pworker->sex << "\nHis experience " << pworker->experience
		<< " years" << "\nHis salary " << pworker->salary;
	delete pworker; //������� ���������
	//pworker = NULL;
	_getch();
}