//1.	�������� ������ ������ ���� � �����.����� ������ � ��������� �� ����.
//�������� � ������������ �������� ����� ������� � ������� ��������� � ������.
//Moshkovskaya Sophia 04.12.2018
 
#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	int numb = 10;
	int *pnumb = &numb;
	int &rnumb = numb;
	cout << "Number: " << numb << "\tPointer: " << *pnumb << "\tReference: " << rnumb << endl;

	*pnumb = -3;
	cout << "Number: " << numb << "\tPointer: " << *pnumb << "\tReference: " << rnumb << endl;
	rnumb = 114;
	cout << "Number: " << numb << "\tPointer: " << *pnumb << "\tReference: " << rnumb << endl;
	_getch();
}