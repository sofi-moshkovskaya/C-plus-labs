//19.	Введите с клавиатуры и выведите на экран одну букву русского алфавита.
//В случае ввода не русской буквы напечатайте сообщение об ошибке на экране и завершите выполнение программы. 
//Мошковская София 11.10.2018

#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char b = ' ';
	cout << "Введите букву" << endl;
	cin >> b;
	if ((int)b >= 224)
	{
		cout << b;
		cin.get();
	}
	else
		cout << "Буква не русского алфавита";
	cin.get();
}