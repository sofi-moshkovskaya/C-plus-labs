//2.	��������� ������ ������� ������������, ���� �������� ��� ������ � ���� ����� ���� � �������� �� �������
//���������� ����� 23.10.2018

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 0, b = 0, c = 0, ygol = 0;
	cout << "������� ��� ������� ������������ � ���� ����� ���� (�� 180�) ";
	cin >> b >> c >> ygol;
	ygol = ygol * 3.14159 / 180;
	a = sqrt(pow(b,2) + pow(c,2) - (2 * b * c *cos(ygol)));
	cout << "\n������ ������� = " << a << endl;
	system("pause");
	return 0;
}