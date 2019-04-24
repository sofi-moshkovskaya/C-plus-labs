//6.	Введите с клавиатуры число в буфер программы - строку С - стиля.
//Преобразуйте строку в целое, длинное целое и вещественное.Выведите числа на экран.
//

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
	int a, b;
	double c;
	char str[50];
	cin.getline(str, 12);
	a = atoi(str);
	b = atol(str);
	c = atof(str);
	cout << a << "\n" << b << "\n" << c << endl;
	system("pause");
	return 0;
}