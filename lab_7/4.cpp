//4	Напишите программу для ввода числа из заданного диапазона с клавиатуры.В случае выхода за границу диапазона повторите ввод числа.
//Мошковская София 20.11.18

#include<iostream>
using namespace std;

void main()
{
	for (int a = 0; a < 1 || a>100;)
	{
		cout << "Input number from 1 to 100" << endl;
		cin >> a;
	}
	cin.get();
}