//Мошковская София. 03.10.2018
//6.	Объявите константу pi со значением 3.14159 двумя способами
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{ 
#define pi 3.14
	cout << pi << endl;
	const double PI = 3.14159;
	cout << M_PI << '\t' << PI;
	cin.get();
	return 0;
}