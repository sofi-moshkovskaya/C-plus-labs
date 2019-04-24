//13.	Напишите драйвер(main - фукцию) для проверки функции п.12

#include <iostream>
using namespace std;

double Chastnoe(int a, int b);
void main()
{
	int a, b;
	cin >> a >> b;
	cout << Chastnoe(a, b) << endl;
	system("pause");
}