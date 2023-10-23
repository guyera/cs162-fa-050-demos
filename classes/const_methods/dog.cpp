#include <iostream>

#include "dog.h"

using namespace std;

// TODO What are we missing?
string dog::get_name() {
	return name;
}

void dog::set_name(string name) {
	this->name = name;
}

// TODO What are we missing?
void dog::speak() const {
	cout << "Bark! Bark! My name is " << name << endl;
}
