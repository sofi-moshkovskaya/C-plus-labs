//4.	�������� ������ ��� �������� �������� ������ ����� �������������� ������(Worker, Pencil, Rectangle�)  �  �����.
//�������� ���� � ���� �������� �������.
//������������ ������ ��������.��� ������ ����������� ��� ������� ��� � �������� ����������.
//Moshkovskaya Sophia
//01.02.19

#include <iostream>
#include <conio.h>
using namespace std;

class CAT
{
public:
	CAT() {age = 1, weight = 5; };
	CAT(int a, int w) { age = a; weight = w; };
	~CAT() {};
	int GetAge() const { return age; }
	int GetWeight() const { return weight; }
	void SetAge() { int a; cin >> a; age = a; }
	void SetWeight() { int w; cin >> w; weight = w; }



	void Display()
	{
		cout << "Cat "<< " age is " << GetAge() << endl;
		cout << "Cat "<< " weight is " << GetWeight() << endl;
	}
private:
	int age;
	int weight;
};

void main()
{
	
	/*CAT Family[MAX];

	for (int i = 0; i < MAX; ++i)
	{
		cout << "input age and weight  " << endl;
		Family[i].SetAge();
		Family[i].SetWeight();

	}

	//�������
	for (int i=0;i<MAX;++i)
	{
		Family[i].Display();
	}

	cout << endl << endl;
	*/

	
	const int MAX = 3;
	//�������� ����������
	CAT* Family2 = new CAT[MAX];
	CAT* pCat = Family2;
	CAT* lCat = pCat + MAX;


	for (pCat; pCat < lCat; ++pCat)
	{
		cout << "input age and weight  " << endl;
		pCat->SetAge();
		pCat->SetWeight();
		pCat->Display();
		cout << endl;
	}

	delete[]Family2;
	Family2 = NULL;
	pCat = 0;

	_getch();
}