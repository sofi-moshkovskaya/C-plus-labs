//������� 1-6
//���������� ����� 10.10.2018
//14.	�������� if, ����������� ��� ����� ���������� � ���������� ������� �� �������.

#include <iostream>
using namespace std;

void main()
{
	int a = 13, b = 47;
	cout << "a = " << a << "\nb = " << b << endl;
	if(a>b)
	{
		a = b;
		cout <<"a>b\n" << "a = " << a << "\nb = " << b << endl;
	}
	else
	{
		b = a;
		cout <<"b>a\n" << "a = " << a << "\nb = " << b << endl;
	}
	cin.get();
}