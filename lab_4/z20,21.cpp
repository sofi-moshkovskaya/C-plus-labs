//���������� ����� 11.10.2018

#include <iostream>
using namespace std;

void main()
{
	//20.	��������� ��������� ���� ����������� �����, ���� ����������� ������ �����������.
	cout << "Input positive integer x and y, (x<y)" << endl;
	unsigned int x = 0, y = 0;
	cin >> x >> y;
	int c=0;
	c = x - y;
	cout << "\nx - y = " << c << endl;
	cin.get(); cin.get();
	
	//21.	��������� ������� ���� ������������, ���� �������� ��  0.
	cout << "Input a,b " << endl;
	double a = 0, b = 0;
	cin >> a >> b;
	cout << "\na / b = " << a / b << endl;
	cin.get(); cin.get();
}