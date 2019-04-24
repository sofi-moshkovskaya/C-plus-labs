//19.	Ќапишите три перегруженные функции с двум€ параметрами различных типов, возвращающие истину, если значение параметров равны.

#include <iostream>
using namespace std;

inline double equal(double s, double p);
inline int equal(int s, int p);
inline bool equal(short s, short p);

void main()
{
	double s, p;
	cin >> s >> p;
	cout << equal(s, p) << endl;
	cin.get(); cin.get();
}

double equal(double s, double p)
{
	if (s == p)
		return 1;
	else 
		return 0;
}
int equal(int s, int p)
{
	if (s == p)
		return 1;
	else
		return 0;
}
bool equal(short s, short p)
{
	if (s == p)
		return true;
	else
		return false;
}