//10	Напишите 3 варианта  switch для печати названий дней недели, используя различные типы его параметра : целое, символ и перечисление.
//Мошковская София 20.11.18

#include<iostream>
using namespace std;

void main()
{
	enum Days { Monday = 1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday };

	int num = 0;
	cout << "Input number of day of the week ";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "Monday\n";
		break;
	case 2:
		cout << "Tuesday\n";
		break;
	case 3:
		cout << "Wednesday\n";
		break;
	case 4: 
		cout << "Thursday\n";
		break;
	case 5: 
		cout << "Friday\n";
		break;
	case 6:
		cout << "Saturday\n";
		break;
	case 7:
		cout << "Sunday\n";
		break;
	default:
			cout << "Oops! Input number from 1 to 7!\n";
			break;
	}
	
	char day;
	cout << "Input the first two symbols of weekday ";
	cin >> day;

	if (day < 'Z' && day > 'A')
		day = day + 32;

	switch (day)
	{
	case 'm':
		cout << "Monday\n";
		break;
	case 't':
		cout << "Tuesday\n";
		break;
	case 'w':
		cout << "Wednesday\n";
		break;
	case 'h':
		cout << "Thursday\n";
		break;
	case 'f':
		cout << "Friday\n";
		break;
	case 's':
		cout << "Saturday\n";
		break;
	case 'u':
		cout << "Sunday\n";
		break;
	default:
		cout << "Oops! There is no such day!\n";
		break;
	}

	int n = 0;
	cout << "Input number of day of the weekday ";
	cin >> n;
	switch (n)
	{
	case Monday:
		cout << "Monday\n";
		//break;
	case Tuesday:
		cout << "Tuesday\n";
		//break;
	case Wednesday:
		cout << "Wednesday\n";
		//break;
	case Thursday:
		cout << "Thursday\n";
		//break;
	case Friday:
		cout << "Friday\n";
		//break;
	case Saturday:
		cout << "Saturday\n";
		//break;
	case Sunday:
		cout << "Sunday\n";
		//break;
	default:
		cout << "Oops! Input number from 1 to 7!\n";
		break;
	}
	
	cin.get();
}