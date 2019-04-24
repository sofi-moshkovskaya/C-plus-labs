//2	Напишите вложенный цикл for, печатающий картинку из нулей 10х10.
//Мошковская София 20.11.18

#include <iostream>
using namespace std;

void main()
{
	for (int i = 1; i <= 4; i++) 
	{

		for (int j = 1; j <= 5; j++) 
		{
			cout << "* ";
		}
		cout << endl;
	}

	cin.get();
}