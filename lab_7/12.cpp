//12	�������� ��������� ��� ����������� ����� ������ ������������� �������� �� ������ �� ��������, ��������� ��������� ������� �������.
//���������� ����� 20.11.18

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int power=0;
	cout << "������� �������� ��������(25;40;60;75;100;150;200): " << endl;
	cin >> power;
	switch (power)
	{
	case 25:
		cout << "2500 �����" << endl;
		break;
	case 40:case 60:
		cout << "1000 �����" << endl;
		break;
	case 75:
		cout << "750 �����" << endl;
		break;
	case 100:
		cout << "750 �����" << endl;
		break;
	case 150:
		cout << "500 �����" << endl;
		break;
	case 200:
		cout << "500 �����" << endl;
		break;
	}
	cin.get(); cin.get();
}