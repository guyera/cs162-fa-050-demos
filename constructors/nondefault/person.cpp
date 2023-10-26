#include <iostream>

#include "person.h"

using namespace std;

// Define the nondefault constructor

person::person(string first_name, string last_name) {
	this->first_name = first_name;
	this->last_name = last_name;
}

void person::greet() const {
	// Print "Hello! My name is <name>"
	cout << "Hello! My name is "
		<< first_name << " "
		<< last_name << endl;
}
