//13.	Преобразуйте ранее разработанный класс(Cat, Worker, Pencil…) в класс с динамическим выделением памяти.
// Moshkovskaya Sophiia 28.11.18

#include <iostream>
#include <conio.h>
using namespace std;
class Worker
{
	int *pAge;
	int *pYears;
	double *pSal;
public:
	Worker();
	Worker(int, int, double);
	~Worker();

	// Функции доступа
	int getAge() const;
	void setAge(int);
	int getYears() const;
	void setYears(int);
	double getSal() const;
	void setSal(double);
};
// конструктор без параметров, по умолчанию , default constructor
Worker::Worker()
{
	pAge = new int;
	pYears = new int;
	pSal = new double;
	*pAge = 0; *pYears = 0; *pSal = 0;
	if (pAge == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	if (pYears == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	if (pSal == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
}

// конструктор c параметрами
Worker::Worker(int age, int years, double salary)
{
	pAge = new int;
	pYears = new int;
	pSal = new double;
	*pAge = age; *pYears = years; *pSal = salary;
	if (pAge == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	if (pYears == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
	if (pSal == 0) {
		cout << "Error! No memory for Worker!!!\n";
		return;
	}
}
Worker::~Worker()
{
	delete pAge;
	delete pYears;
	delete pSal;
	pAge = 0;
	pYears = 0;
	pSal = 0;
}
int Worker::getAge() const
{
	return *pAge;
}

void Worker::setAge(int age)
{
	*pAge = age;
}

int Worker::getYears() const
{
	return *pYears;
}

void Worker::setYears(int years)
{
	*pYears = years;
}
double Worker::getSal() const
{
	return *pSal;
}
void Worker::setSal(double salary)
{
	*pSal = salary;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	Worker worker(43, 7, 7500.5);
	Worker * w1 = new Worker;
		
	cout << "Возраст : " << worker.getAge() << "  ," << w1->getAge() << endl;
	cout << "Стаж : " << worker.getYears() << "  ," << w1->getYears() << endl;
	cout << "Зарплата : " << worker.getSal() << " ," << w1->getSal() << endl;

	_getch();
}

