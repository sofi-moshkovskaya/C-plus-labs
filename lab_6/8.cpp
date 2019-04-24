//8.	*** Ќапишите объ€вление и реализацию закрытого класса дл€ работы с датой, состо€щей их трех целых чисел :
//день, мес€ц, год.¬ключите в состав класса конструкторы, деструктор, методы доступа, 
//логические методы дл€ проверки частей даты и определени€ високосного года, распечатки даты в нескольких 
//форматах(Удд.мм.ггФ, Удд / мм / ггггФ, Уmmm - dd - yyyyФ).
//ѕротестируйте этот класс.


#include <iostream>
#include <string>
using namespace std;

const string MONTHS[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

class Date {
private:
	int day, month, year;
public:
	Date();
	Date(int, int, int);
	int getDay() { return day; };
	int getMonth() { return month; };
	int getYear() { return year; };
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	bool isLeap();
	bool isdate(int d);
	bool ismonth(int m);
	void print(char c = '.');
};

int main() {
	Date d1(29, 2, 2000), d2;
	d1.print();
	d1.print('/');
	d1.print('-');
	cout << "Is leap? " << d1.isLeap() << endl;


	cout << endl;

	d2.print();
	d2.print('/');
	d2.print('-');
	cout << "Is leap? " << d2.isLeap() << endl;


	cout << endl;

	d2.setMonth(2);
	d2.setDay(29);
	d2.setYear(2000);

	d2.print();
	d2.print('/');
	d2.print('-');
	cout << "Is leap? " << d2.isLeap() << endl;
	cout << ((d2.ismonth(2)) ? "" : "Month must be in range between 1 and 12");
	cout << ((d2.isdate(29)) ? "" : "Wrong date!");

	cin.get();
}

Date::Date() {
	day = 1;
	month = 1;
	year = 1980;
}

Date::Date(int d, int m, int y) {
	day = 1;
	month = 1;
	year = 1980;

	setYear(y);
	setMonth(m);
	setDay(d);
}

void Date::setDay(int d) {
	day = d;
	isdate(d);
	/*if (((month < 8 && month % 2 == 1) || (month > 7 && month % 2 == 0)) && (day < 1 || day > 31)) {
		cout << "Day must be in range between 1 and 31" << endl;
		return;
	}
	if (month == 2 && isLeap() && d > 29) {
		cout << "Day of February must be in range between 1 and 29" << endl;
		return;
	}
	if (month == 2 && !isLeap() && d > 28) {
		cout << "Day of February must be in range between 1 and 29" << endl;
	}
	if (((month < 8 && month % 2 == 0) || (month > 7 && month % 2 == 1)) && (day < 1 || day > 30)) {
		cout << "Day must be in range between 1 and 30" << endl;
		return;
	}*/
}

bool Date::isdate(int d)
{
	if (((month < 8 && month % 2 == 1) || (month > 7 && month % 2 == 0)) && (d < 1 || d > 31)) {
		return false;
	}
	if ((month!=2) && (d < 1 || d > 30)) {
		return false;
	}
	if (month == 2 && isLeap() && d > 29) {
		return false;
	}
	if (month == 2 && !isLeap() && d > 28) {
		return false;
	}
	else return true;
}

void Date::setMonth(int m) {
	month = m;
	ismonth(m);
}

bool Date::ismonth(int m)
{
	if (m < 1 || m > 12) {
		return false;
	}
	else return true;
}

void Date::setYear(int y) {
	year = y;
}

bool Date::isLeap() {
	return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
}

void Date::print(char c) {
	if (c != '-') {
		cout << "Date: " << ((day < 10) ? "0" : "") << day << c << ((month < 10) ? "0" : "") << month << c << year << endl;
	}
	else {
		cout << "Date: " << MONTHS[month - 1] << c << ((day < 10) ? "0" : "") << day << c << year << endl;
	}
}


/*
#include <iostream>
#include <string.h>
using namespace std;

typedef unsigned short int USI;

class Date
{
	public:
	USI Day;
	USI Month;
	USI Year;

	Date() { Day = 1, Month = 1, Year = 1900; }
	Date(USI d, USI m, USI y)
	{
		Day = d;
		Month = m;
		Year = y;
	}

	~Date();


	bool LeapYear(USI y);
	void SetDay(USI d);
	void SetMonth(USI m);
	void SetYear(USI y);
	void YearDot();
	void YearSlash();
	void YearDash();
};

bool Date::LeapYear(USI y)
{
	if (y % 400 == 0 || (y%4==0 && y%100!=0))
		return true;
}

void Date::SetYear(USI y)
{
	Year = y;
}

void Date::SetMonth(USI m)
{
	if (m >= 1 && m <= 12)
		Month = m;
	else
		cout << "Month must be between 1 and 12";
}

void Date::SetDay(USI d)
{
	if (((Month % 2 == 1 && Month < 8) || (Month % 2 == 0 && Month > 7)) && (d >= 1 && d <= 31))
		Day = d;
	if (Month != 2 && d >= 1 && d <= 30)
		Day = d;
	if (LeapYear(Year) && d <= 29)
		Day = d;
	if (!LeapYear(Year) && d <= 28)
		Day = d;
	else
		cout << "Wrong date!";
}
     
void Date::YearDot()
{
	cout << Year;
}*/