/*4.	Измените программу 3. так, чтобы в ней обрабатывались сведения о двух сотрудниках.

Мошковская София. 03.10.2018*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int PersNo1 = 513;
	char Sur1[20] = "Kovalenko";
	char Gen1[6] = "Male";
	int Age1 = 47;
	double Weight1 = 83.5;
	bool smoking1 = true;
	double TarStavka1 = 424.7; 

	int PersNo2 = 344;
	char Sur2[25] = "Ivanova";
	char Gen2[8] = "Female";
	int Age2 = 31;
	double Weight2 = 66.2;
	bool smoking2 = true;
	double TarStavka2 = 357;
	
	cout << "Info about 1st co-worker\n";
	cout << "\nPersonal Number: " << PersNo1 << "\nSurname: " << Sur1 << ", Gender: " << Gen1 << "\nAge: " << Age1 << ", Weight: " << Weight1 << "kg" << "\nSmoking: " << smoking1 << "\nTariff rate: " << TarStavka1 << endl;
	
	cout << "\nInfo about 2nd co-worker\n";
	cout << "\nPersonal Number: " << PersNo2 << "\nSurname: " << Sur2 << ", Gender: " << Gen2 << "\nAge: " << Age2 << ", Weight: " << Weight2 << "kg" << "\nSmoking: " << smoking2 << "\nTariff rate: " << TarStavka2 << endl;

	cout << "Input info about 1st co-worker by 'ENTER'\n";
	cin >> PersNo1 >> Sur1 >> Gen1 >> Age1 >> Weight1 >> smoking1 >> TarStavka1;

	cout << "Input the information about 2nd co worker by 'ENTER'"<< endl;
	cin >> PersNo2 >> Sur2 >> Gen2 >> Age2 >> Weight2 >> smoking2 >> TarStavka2;

	cout << "Info about 1st co-worker\n";
	cout << "\nPersonal Number: " << PersNo1 << "\nSurname: " << Sur1 << ", Gender: " << Gen1 << "\nAge: " << Age1 << ", Weight: " << Weight1 << "kg" << "\nSmoking: " << smoking1 << "\nTariff rate: " << TarStavka1 << endl;
	
	cout << "Info about 2nd co-worker\n";
	cout << "\nPersonal Number: " << PersNo2 << "\nSurname: " << Sur2 << ", Gender: " << Gen2 << "\nAge: " << Age2 << ", Weight: " << Weight2 << "kg" << "\nSmoking: " << smoking2 << "\nTariff rate: " << TarStavka2 << endl;
	cin.get();cin.get();
	return 0;
}