/*1.	�������� ���������, ���������� �� ����� �������� ������������ ��������� iostream.

Moshkovskaya Sophia 
18.03.2019*/



#include <iostream>
#include <conio.h>
using namespace std;

//� ������ ��������� 4 �������: cin, cout, cerr, clog

void main()
{
	int number = 0;

	cout << "Input natural number:  ";
	cin >> number;

	if (number <= 0)
		cerr << "Error!!!  the number must be natural..." << endl;
	else
	{
		if (number % 2 == 0)
			clog << "The number is even!" << endl;
		else
			clog << "The number is odd!" << endl;
	}
	_getch();
}