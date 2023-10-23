#include <iostream>

#include "person.h"

using namespace std;

int main() {
	// Create a person
	person joe;
	joe.set_name("Joe");

	// Create another person
	person sally;
	sally.set_name("Sally");

	// Print their memory addresses manually
	cout << "Joe's memory address is " << &joe << endl;
	cout << "Sally's memory address is " << &sally << endl;

	// Call their `print_this()` member functions to prove that they print
	// the same thing---their respective memory addresses
	joe.print_this();
	sally.print_this();
}
