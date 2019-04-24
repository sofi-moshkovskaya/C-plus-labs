/*		7.Напишите программу, выполняющую ввод двух строк С - стиля с клавиатуры,
		их сравнение, и объединение в третьей строке.Определите число символов в строке объединения.
		8.	строки содержат по одному слову;
		9.	строки содержат по несколько слов;
		10.	Измените эту программу, использовав строковый класс вашего компилятора.

Moshkovskaya Sophia
01.02.19 */

#include <iostream>
#include <conio.h>
#include <sstream>
#include <string.h>
using namespace std;

void Comparison_char(const char* str1, const char* str2);
void Comparison_string(string str1, string str2);
void task7_9();
void task10();
void Print_result(int result);

void main()
{
	task7_9();
	cout << "\n==========================================" << endl << endl;
	_getch();


	task10();
	_getch();

}
void task7_9()
{
	const int numb = 200;
	char string_first[numb] = "";
	char string_second[numb] = "";
	char string_third[numb] = "";

	cout << "Press ENTER to start the new line..." << endl;
	cout << "Input the first line:  ";
	cin.getline(string_first, numb);
	
	cout << "\nInput the second line:   ";
	cin.getline(string_second, numb);

	Comparison_char(string_first, string_second);
	
	strcat_s(string_third, string_first);
	strcat_s(string_third, " ");
	strcat_s(string_third, string_second);

	cout << "Result line: " << string_third << endl;
	cout << "Summary lenght " << strlen(string_third);

	_getch();

}


void task10()
{
	string str1;
	string str2;

	cout << "Input the first line and the second, interrupt by space as well..." << endl;
	cin >> str1 >> str2;
	
	Comparison_string(str1, str2);

	string str3 = str1 + ' ' + str2;
	cout << "\nResult line: " << str3 << endl;

	cout << "Total lenght " << str3.length() << endl;

}

void Comparison_char(const char* str1, const char* str2)
{
	int result = strcmp(str1, str2);
	Print_result(result);
}


void Comparison_string(string str1, string str2)
{
	int res = str1.compare(str2);
	Print_result(res);
}

void Print_result( int result)
{
	if (result == 0)
		cout << "Line One == Line Two\n";
	else if (result > 0)
		cout << "Line One  > Line Two\n";
	else
		cout << "Line One  < Line Two\n";
}