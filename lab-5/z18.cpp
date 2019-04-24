//18.	Напишите функцию для сложения двух чисел, имеющую одно значение по умолчанию.
#include <iostream>

using namespace std;

inline int sum(int a = 3, int b = -28);

void main()
{
	int a = 1, b = 4;
	cout << "First sum is (a+b)  " << sum(a,b);
	cout << "\nSecond sum is (only a)  " << sum(a);
	cout << "\nThidr sum is (only b)  " << sum(b);
	cout << "\nFourth sum is  " << sum() << endl;
	system("pause");
}

int sum(int a, int b)
{
	return a + b;
}