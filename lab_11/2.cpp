//2.	Перепишите программу п.1, разбив ее на функции.
//Moshkovskaya Sophia
//01.02.19



#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

void SetRandom(int [],int );
void Sort(const int []);
int Max(const int [], int);
int Min(const int [], int );
void EvenOdd(const int [], int& , int&);
void SumAvarage(const int [], int&, double&);
void Print(int, double, int, int, int, int);

const int MAX = 1000;

void main()
{
	int Array[MAX];
	SetRandom(Array, MAX);
	Sort(Array);
	
	_getch();
}

void SetRandom(int arr[], int max)
{
	srand(time(NULL));

	for (int i = 0; i < MAX; ++i)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";

		if (i % 6 == 0)
			cout << "\n";
	}
}

void Sort(const int arr[])
{
	int even = 0, odd = 0, sum = 0, min = 0, max = 0;
	double avarage = 0;

	min = Min(arr, min);
	max = Max(arr, max);

	EvenOdd(arr, even, odd);
	SumAvarage(arr, sum, avarage);

	Print(sum, avarage, even, odd, min, max);
}

int Max(const int arr[], int m)
{
	int i = 0;
	m = arr[i];
	for (i; i < MAX; ++i)
	{
		if (m < arr[i])
			m = arr[i];
	}
	
	return m;
}


int Min(const int arr[], int m)
{
	int i = 0;
	m = arr[i];
	for (i; i < MAX; ++i)
	{
		if (m > arr[i])
			m = arr[i];
	}
	return m;
}


void EvenOdd(const int arr[], int& even, int& odd)
{
	for (int i = 0; i < MAX; ++i)
	{
		if (arr[i] % 2 == 0)
			even += 1;
		else odd += 1;

	}
}


void SumAvarage(const int arr[], int& sum, double& avarage)
{
	for (int i = 0; i < MAX; ++i)
		sum += arr[i];

	avarage = (double)sum / MAX;
}



void Print(int sum,double avar, int even, int odd, int min, int max)
{
	cout << "\n\n" << "Sum = " << sum << "\nAvarage = " << avar
			<< "\nEvens: " << even << "\nOdds: " << odd
			<< "\nMin = " << min << "\nMax = " << max << endl;
}