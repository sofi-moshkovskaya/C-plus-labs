#include<iostream>
using namespace std;
#include "Cat.h"
Cat::Cat() {
	age = 8;
	weight = 3.4;
	meow = 1;
}
Cat::~Cat() { ; }
void Cat::SetAge(int a) {
	age = a;
}
void Cat::SetWeight(double w) {
	weight = w;
}
void Cat::SetMeow(int m) {
	meow = m;
}