/*
19.	Введите ФИО, возраст, вес одной строкой в символьный массив и  затем в программе получите отдельные переменные и выведите их на экран.
	Используйте функции ввода - вывода языка С.

Moshkovskaya Sophia
18.03.2019*/

#include <stdlib.h>
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

	printf("Input Surname, Name , Patronymic, age ,weight: \n");
	cin.getline(str, 70);

	surname = strtok_s(str, " ", &next_token);
	name = strtok_s(NULL, " ", &next_token);
	patronymic = strtok_s(NULL, " ", &next_token);
	age = stoi(strtok_s(NULL, " ", &next_token));
	weight = stod(strtok_s(NULL, " ", &next_token));

	printf("%s %s %s %i %f\n", surname.c_str(), name.c_str(), patronymic.c_str(), age, weight);

	cin.get();
	return 0;
}