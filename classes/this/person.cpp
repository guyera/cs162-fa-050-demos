#include <iostream>

#include "person.h"

using namespace std;

void person::set_name(string name) {
	this->name = name;
}

string person::get_name() {
	return name;
}

void person::print_this() {
	cout << this << endl; // Prints the address of our person
}
