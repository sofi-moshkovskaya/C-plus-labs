//3	Напишите  циклы for, while, do…while для печати чисел от 100 до 200 через 2.
//Мошковская София 20.11.18

#include <iostream>
using namespace std;


void main() {
	int numb = 100;	
	cout << "For" << endl;
	for (int numb = 100; numb <= 200; numb++)
	{
		if (numb % 2 == 0) {
			cout << numb << "  ";
		}
	}

	cout << "\nWhile" << endl;
	numb = 100;
	while (numb <= 200) 
	{
		cout << numb;
		numb+=2;
	}

	cout << "\nDo-While" << endl;
	numb = 100;
	do {
		if (numb % 2 == 0) {
			cout << numb << "\t";
		};
		numb++;
	} while (numb <= 200);

	cin.get();
}