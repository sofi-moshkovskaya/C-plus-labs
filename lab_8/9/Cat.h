#pragma once

class Cat
{
bool meow = 0;
int age = 0;
double weight = 0;
public:
	Cat();
	~Cat();
	void SetAge(int);
	void SetWeight(double);
	void SetMeow(int);
	int GetAge() const { return age; };
	double GetWeight() const { return weight; };
	bool GetMeow() const { return meow; };
};
