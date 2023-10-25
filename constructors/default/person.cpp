#include <iostream>

#include "person.h"

using namespace std;

// Define the constructor. Again, no return type.
// It's in the person class, so we prefix with
// `person::`. It's a constructor, so it's called
// `person`. It has no parameters.
person::person() {
	// TODO Initialize first_name to "John" and last_name
	// to "Doe"
}

void person::set_first_name(const string& first_name) {
	this->first_name = first_name;
}

void person::set_last_name(const string& last_name) {
	this->last_name = last_name;
}

void person::greet() const {
	// Print "Hello! My name is <name>"
	cout << "Hello! My name is "
		<< first_name << " "
		<< last_name << endl;
}
