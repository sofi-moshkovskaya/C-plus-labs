//16.	�������� � ��������� ������ void - �������  ��� ���������� �����, ��������� �������� �������� ����������  �� ��������.
//��������� � �������������� �� ������.

#include <iostream>
using namespace std;

void x2(double &a);

void main()
{
	double n;
	cout << "Input digital" << endl;
	cin >> n;
	x2(n);
	cout << n;
	system("pause");
}

void x2(double &a)
{
	a = a * 2;
}