/*
15.	�������� ���������, ������� ������� ��������� ��������� ������ � �������� ������� � �� ������� ��� ���������.


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