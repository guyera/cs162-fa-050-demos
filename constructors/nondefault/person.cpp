#include <iostream>

#include "person.h"

using namespace std;

// TODO Define the nondefault constructor

void person::greet() const {
	// Print "Hello! My name is <name>"
	cout << "Hello! My name is "
		<< first_name << " "
		<< last_name << endl;
}
