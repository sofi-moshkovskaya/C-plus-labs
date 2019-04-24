//Напишите программу, запрашивающую у пользователя декартовы координаты двух точек(x1, y1) и(x2, y2) с клавиатуры, 
//вычисляющую и печатающую расстояние между ними по следующей формуле
//Мошковская София 23.10.2018

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, dist;
	cout << "Введите координаты двух точек (x1, y1) и (x2, y2)" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << "Расстояние между точками " << dist << endl;
	system("pause");
	return 0;
}