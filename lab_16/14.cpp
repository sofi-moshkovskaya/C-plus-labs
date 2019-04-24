//14.	Введите ФИО, возраст, вес одной строкой в символьный массив и  затем в программе получите отдельные переменные и выведите их на экран.
//Используйте классы внутреннего ввода - вывода языка С++.


#include <string>
#include <iostream>
using namespace std;

int main() 
{
	char str[70];
	string surname;
	string name;
	string patronymic;		
	short age;
	double weight;

	char* next_token = NULL;

	cout << "Input Surname, Name , Patronymic, age ,weight: " << endl;
	cin.getline(str, 70);

	surname = strtok_s(str, " ", &next_token);
	name = strtok_s(NULL, " ", &next_token);
	patronymic = strtok_s(NULL, " ", &next_token);
	age = stoi(strtok_s(NULL, " ", &next_token));
	weight = stod(strtok_s(NULL, " ", &next_token));

	cout << surname  << " " << name << " " << patronymic << " " << age << " " << weight << endl;

	cin.get();
	return 0;
}