/*
15.	Ќапишите программу, котора€ выводит аргументы командной строки в обратном пор€дке и не выводит им€ программы.


Moshkovskaya Sophia
18.03.2019*/#include <iostream>
using namespace std;

int main(int argn, char* argv[]) {
	cout << "Amount: " << argn << endl;
	for (int i = argn - 1; i > 0; i--) {
		cout << i << ": " << argv[i] << endl;
	}
	system("pause");
}