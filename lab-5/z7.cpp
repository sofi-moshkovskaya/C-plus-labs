//7.	Реализуйте набор личных функций tolowerR(ch), toupperR(ch), isalphaR(ch), islowerR(ch),
//isupperR(ch), isalnumR(ch) для работы с символами русского алфавита

#include <iostream>
#include <ctype.h>
#include <Windows.h>
using namespace std;

int tolowerR(unsigned char f);
int toupperR(unsigned char f);
int isalphaR(unsigned char f);
int islowerR(unsigned char f);
int isupperR(unsigned char f);
int isalnumR(unsigned char f);

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char f , res;

	cin >> f;

	res = tolowerR(f);
	cout << "Результат tolowerR() = " << res << endl;

	res = toupperR(f);
	cout << "Результат toupperR() = " << res << endl;

	res = isalphaR(f);
	cout << "Результат isalphaR() = " << (int)res << endl;

	res = islowerR(f);
	cout << "Результат islowerR() = " << (int)res << endl;

	res = isupperR(f);
	cout << "Результат isupperR() = " << (int)res << endl;

	res = isalnumR(f);
	cout << "Результат isalnumR() = " << (int)res << endl;

	system("pause");
}

int tolowerR(unsigned char f)
{
	if (isupperR (f) == 1)
		return f = (int)f + 32;
	else return f;
}

int toupperR(unsigned char f)
{
	if (islowerR (f) == 1)
		return f = (int)f - 32;
	else return f;
}

int isalphaR(unsigned char f)
{
	if (f >= 192)
		return 1;
	else 
		return 0;
}

int islowerR(unsigned char f)
{
	if (f >= 224)
		return 1;
	else
		return 0;
}

int isupperR(unsigned char f)
{
	if (f >= 192 && f <= 223)
		return 1;
	else
		return 0;
}

int isalnumR(unsigned char f)
{
	if ((f >= 48 && f <= 57) || f >= 192)
		return 1;
	else 
		return 0;
}