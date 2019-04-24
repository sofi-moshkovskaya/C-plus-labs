//Мошковская София. 03.10.2018/

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <limits>

using namespace std;

int main()
{
	//11. Распечатайте на экране значения основных математических констант, объявленных в библиотеке math.h.
	cout << "e\t" << M_E << "\nlog2(e)\t\t" << M_LOG2E << "\nlog10(e)\t" << M_LOG10E << "\nln(2)\t" << M_LN2 << "\nln(10)\t" << M_LN10 <<
		"\npi\t" << M_PI << "\npi/2\t" << M_PI_2 << "\npi/4\t" << M_PI_4 << "\n1/pi\t" << M_1_PI << "\n2/pi\t" << M_2_PI << "\n2/sqrt(pi)\t"
		<< M_2_SQRTPI << "\nsqrt(2)\t" << M_SQRT2 << "\n1/sqrt(2)\t" << M_SQRT1_2 << endl;
	cin.get();

	//12.	Выдайте на экран подсказку для ввода числа типа signed long int, используя константы из библиотеки limits.h
	long int num = 0;
	cout << "input number from" << 0 << " to " << UCHAR_MAX << endl;
	cin >> num;
	cout << num << endl;


	cin.get(); cin.get();

	//13.	Выведите на экран все прописные русские буквы и их номера.
	setlocale (LC_ALL, "Russian");
	for (int i = 0; i <= 255; i++)   
	{
		cout << "Number:" << i << "\t\tSymbol:" << (unsigned char)i << endl;
	}
	cin.get();
}