//8.	��������  ���������� ������� ��� �������� ��������� ������ ������(�����, �����, �����, ���, ��������) � ����� ������.
//������������������� �� ������ �������.���������� �������� ��������� ������, �������� ������������ �����.
//������������ �������� ����� ������, �������� ������������ �����.���������� ����� ��������� ������ � ����� ������.
//���������� ����� ������ ������ : ����� ��� �����, ��������� ��������� �����.

#include <iostream>
#include <string.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char city[10] = "", distr[25] = "", street[20] = "", house[4] = "", address[50] = "";

	strcpy_s(city, "Kherson,");
	strcpy_s(distr, "Suvorovskiy district,");
	strcpy_s(street, "Azovskiy lane,");
	strcpy_s(house, "10");

	strncat_s(address, city, 20);
	strncat_s(address, distr, 25);
	strncat_s(address, street, 20);
	strncat_s(address, house, 20);
	
	cout << address << endl;

	cout << "����� city ����� " << strlen(city) << endl;
	cout << "����� district ����� " << strlen(distr) << endl;
	cout << "����� street ����� " << strlen(street) << endl;
	cout << "����� house ����� " << strlen(house) << endl;
	cout << "����� address ����� " << strlen(address) << endl;
	
	cout << "������� ����� city � district " << endl;
	if (strcmp(city, distr) == 1) 
		cout << "������ ������ city" << endl;
	else 
		cout << "������ ������ district" << endl;
	system("pause");
}