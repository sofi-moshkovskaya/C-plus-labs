//6.	������� � ���������� ����� � ����� ��������� - ������ � - �����.
//������������ ������ � �����, ������� ����� � ������������.�������� ����� �� �����.
//

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
	int a, b;
	double c;
	char str[50];
	cin.getline(str, 12);
	a = atoi(str);
	b = atol(str);
	c = atof(str);
	cout << a << "\n" << b << "\n" << c << endl;
	system("pause");
	return 0;
}