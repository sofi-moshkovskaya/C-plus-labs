//9.	�������� �������� ������� � ������ Perimeter(),
//������� ���������� ����������� ������� ����� � ��������� ��� ��������� ���� int.

//10.	�������� ����������� ������� Perimeter(), ����������� �������� ��������������.

#include <iostream>
using namespace std;

long unsigned int Perimeter(int length, int width); //��������

void main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	cout << Perimeter(a, b);
	cin.get(); cin.get();
}

long unsigned int Perimeter(int length, int width) //����������� �������
{
	return 2 * (length + width);
}