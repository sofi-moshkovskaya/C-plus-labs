/*3.	�������� ����������, ����������� ��� �������� ��������� �������� � ���������� :
��������� �����, �������, ���, �������, ���, ����� ��� ���, �������� ������ � ������������������ ��.
������������ ������ �� ������. ������� ����� �������� � ���������� � ����� ������������.

���������� �����, 03.10.2018*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int PersNo = 513;
	char Sur[20] = "Kovalenko";
	char Gen[8] = "Male";
	int Age = 47;
	float Weight = 83.5;
	bool smoking = true;
	double TarStavka = 424.7;

	cout << "Personal Number  " << PersNo << "\nSurname  " << Sur << "\nGender  " << Gen << "\nAge = " << Age << "\nWeight = " << Weight << "\nSmoking  " << smoking << "\nTariff rate = " << TarStavka << endl;

	cout << "\nInput new meanings by 'ENTER'\n";
	cin >> PersNo >> Sur >> Gen >> Age >> Weight >> smoking >> TarStavka;

	cout << "\nPersonal Number  " << PersNo << "\nSurname  " << Sur << "\nGender  " << Gen << "\nAge = " << Age << "\nWeight = " << Weight << "\nSmoking  " << smoking << "\nTariff rate = " << TarStavka << endl;
	cin.get();cin.get();
	return 0;
}