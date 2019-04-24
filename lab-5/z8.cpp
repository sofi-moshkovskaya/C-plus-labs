//8.	Объявить  символьные массивы для хранения элементов своего адреса(город, район, улица, дом, квартира) и всего адреса.
//Проинициализировать их пустой строкой.Определить значение элементов адреса, выполнив присваивание строк.
//Сформировать значения всего адреса, выполнив конкатенацию строк.Определить длину элементов адреса и всего адреса.
//Определите какая строка больше : город или район, выполнить сравнение строк.

#include <iostream>
#include <string.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char city[10] = "", distr[25] = "", street[20] = "", house[4] = "", address[50] = "";

	strcpy_s(city, "Kherson,");
	strcpy_s(distr, "Suvorovskiy district,");
	strcpy_s(street, "Azovskiy lane,");
	strcpy_s(house, "10");

	strncat_s(address, city, 20);
	strncat_s(address, distr, 25);
	strncat_s(address, street, 20);
	strncat_s(address, house, 20);
	
	cout << address << endl;

	cout << "Длина city равна " << strlen(city) << endl;
	cout << "Длина district равна " << strlen(distr) << endl;
	cout << "Длина street равна " << strlen(street) << endl;
	cout << "Длина house равна " << strlen(house) << endl;
	cout << "Длина address равна " << strlen(address) << endl;
	
	cout << "Сравним длину city и district " << endl;
	if (strcmp(city, distr) == 1) 
		cout << "Больше строка city" << endl;
	else 
		cout << "Больше строка district" << endl;
	system("pause");
}