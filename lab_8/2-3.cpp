//2.	���� � ��� ������� ���������� ���� unsigned short int � ������ yourAge, ��� �������� ���������, ����� ����� � ��� ������.
//Moshkovskay Sophiia 28.11.19

#include <iostream>
using namespace std;
void main()
{
	unsigned short int  yourAge = 17;
	unsigned short int *pyourAge = &yourAge;

//3.	��������� �������� 50 ���������� yourAge �� �.2.
	*pyourAge = 50;
}