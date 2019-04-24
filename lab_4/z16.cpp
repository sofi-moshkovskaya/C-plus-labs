//задания 1-6
//Мошковская София 10.10.2018
//16.	Определите большее из трех чисел, введенных с клавиатуры

#include <iostream>
using namespace std;

void main()
{
	int a = 0, b = 0, c = 0;
	cout << "Input a,b,c" << endl;
	cin >> a >> b >> c;
	cout << "a = " << a << "\t,b = " << b << "\t,c = " << c << endl;

	if (a > c && b > c)
	{
		if (a > b)
			cout << "a is max";
		else
			cout << "b is max";
	}

	else if (b > a && c > a)
	{
		if (b > c)
			cout << "b is max";
		else
			cout << "c is max";
	}

	else
	{
		if (a > c)
			cout << "a is max";
		else
			cout << "c is max";
	}
	cin.get();cin.get();
}