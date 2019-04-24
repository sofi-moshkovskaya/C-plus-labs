//12	Напишите программу для определения срока службы электрической лампочки на основе ее мощности, используя следующую таблицу решений.
//Мошковская София 20.11.18

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int power=0;
	cout << "Введите мощность лампочки(25;40;60;75;100;150;200): " << endl;
	cin >> power;
	switch (power)
	{
	case 25:
		cout << "2500 часов" << endl;
		break;
	case 40:case 60:
		cout << "1000 часов" << endl;
		break;
	case 75:
		cout << "750 часов" << endl;
		break;
	case 100:
		cout << "750 часов" << endl;
		break;
	case 150:
		cout << "500 часов" << endl;
		break;
	case 200:
		cout << "500 часов" << endl;
		break;
	}
	cin.get(); cin.get();
}