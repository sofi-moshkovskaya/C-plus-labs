//12.	�������� ���������, ��������� ������ ������.��������� �������� ������ ������ � ������� �������� �������� 
//������ ����� �������������� ������(Cat, Worker, Pencil�).��������� ��� �� ���������.
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
	pnumber = &a;  // �������������� ��������� ��� �������� �����������, ������ �������� ������� � ������ ������

	while (1) {
		Worker *pworker = new Worker; //����������� ����
		cout << "worker created!  ";
	}

	Worker *pworker = new Worker;
	//delete pworker;   //��� �������� ���������� ������ ������
	//pworker = NULL;
	_getch();
}