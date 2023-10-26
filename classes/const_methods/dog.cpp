#include <iostream>

#include "dog.h"

using namespace std;

string dog::get_name() const {
	return name;
}

void dog::set_name(string name) {
	this->name = name;
}

void dog::speak() const {
	cout << "Bark! Bark! My name is " << name << endl;
}
