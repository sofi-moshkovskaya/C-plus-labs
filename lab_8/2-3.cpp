//2.	≈сли у вас имеетс€ переменна€ типа unsigned short int с именем yourAge, как объ€вить указатель, чтобы иметь к ней доступ.
//Moshkovskay Sophiia 28.11.19

#include <iostream>
using namespace std;
void main()
{
	unsigned short int  yourAge = 17;
	unsigned short int *pyourAge = &yourAge;

//3.	ѕрисвойте значение 50 переменной yourAge из п.2.
	*pyourAge = 50;
}