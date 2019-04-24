/*13.	Напишите класс защищенного массива для объектов  ранее разработаного класса(Worker, Pencil, Cat…) 
с оператором индексации и проверьте его в главной программе.

Moshkovskaya Sophia
01.02.19 */

#include <iostream>
#include <conio.h>
using namespace std;


class BoundaryError {};
class CreateError {};

class CAT
{
public:
	CAT() {};
	CAT(int size);
	~CAT();
	int GetAge() const { return age; }
	int GetWeight() const { return weight; }
	void SetAge(int a) { age = a; }
	void SetWeight(int w) { weight = w; }
	CAT & operator [] (int index);
private:
	int amount;
	int age;
	int weight;
	CAT* pCat;
};

int main()
{
	try
	{
		int N = 10;
		CAT cats(N);
		
		for (int i=0;i<N; ++i)
		{
			cats[i].SetAge (2 *i + 1);
			cats[i].SetWeight(i + 6);
			cout << "Cat " << i << ": Age " << cats[i].GetAge() << " Weight " << cats[i].GetWeight() << endl;

		}

			
		try
		{
			cats[50].SetWeight(28);
		}
		catch (BoundaryError)
		{
			cout << "Wrong index!" << endl;
		}

	}
	
	catch (CreateError)
	{
		cout << "Memory error!" << endl;
		return 1;
	}

	_getch();
	return 0;
}

CAT::CAT(int size)
{
	amount = size;
	pCat = new CAT[size];

	if(!pCat)
		throw CreateError();
	
}

CAT::~CAT()
{
	delete [] pCat;
	pCat = nullptr;
}

CAT & CAT:: operator [] (int index)
{
	if (index < 0 || index > amount - 1)
	{
		throw BoundaryError();  
	}
	return pCat[index];
}

