//14.	Ќапишите и проверьте функцию, возвращающую истину, 
//если с клавиатуры введены символы СYТ, СyТ, СдТ, СƒТ и ложь в противном случае.

#include <iostream>
#include <Windows.h>

using namespace std;

bool bukva(unsigned char a);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char a;
	cin >> a;
	setlocale(LC_ALL, "Russian");
	cout << bukva(a) << endl;
	system("pause");
}

bool bukva(unsigned char a)
{
	
	a = (int)a;
	if (a == 89 || a == 121 || a == 196 || a == 228)
		return true;
	else 
		return false;
}