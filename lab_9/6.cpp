//6.	������� � ���������� � ������� ������� scanf() ��� �����(����� � ������������) � 
//������������ �� �� ������ ��� ������ ������� printf(), ���� ��� ����� ���� ������� ���������.
//Moshkovskaya Sophia 04.12.2018

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void  main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	float y = 0;

	printf("������� ����� � ������������ ����� ����� ������\n");
	int kod=scanf_s("%d %f", &x, &y);
	
	if (kod==2)
	{
		printf("����� ����� - %d", x);
		printf("\n������������ ����� - %f", y);
	}
	else
		cout << "������� ������������ �����" << endl;
	_getch();
}