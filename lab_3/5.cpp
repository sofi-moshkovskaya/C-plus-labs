//Мошковская София. 03.10.2018
//5.Напишите функцию с параметрами для распечатки сведений о сотруднике на экране.Вызовите ее для каждого из сотрудников.
#include <iostream>
#include <string> 
using namespace std;

void Data(int a, char b[], char c[], int d, double e, bool f, double g);

int main ()
{
	int PerNo1 = 5231;
	char Sur1[20] = "Ivanova";
	char Gen1[8] = "Female";
	int Age1 = 26;
	double Weight1 = 52.3;
	bool smoke1 = false;
	double TarSt1 = 3214.52;
	
	Data ( PerNo1, Sur1, Gen1,  Age1,  Weight1, smoke1,  TarSt1);
		
	int PerNo2 = 19304;
	char Sur2[20] = "Kovalenko";
	char Gen2[8] = "Male";
	int Age2 = 52;
	double Weight2 = 88.1;
	bool smoke2 = false;
	double TarSt2 = 4280.2;

	
	Data ( PerNo2, Sur2, Gen2,  Age2,  Weight2,  smoke2, TarSt2);
	cin.get();	
}

void Data(int a, char b[], char c[], int d, double e, bool f, double g)
{
	cout << "\nTabNo: " << a << "\nSurname: " << b << "\nGender: " << c << "\nAge: " << d << "\nWeight: " << e
		<< "\nSmoke: " << f << "\nTariff rate: " << g << endl;
	cin.get();
}

