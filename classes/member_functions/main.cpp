#include <iostream>

#include "person.h"

using namespace std;

int main() {
	// Create a person
	person joe;

	// Call joe's mutator function to set their name to "Joe"
	joe.set_name("Joe");
	joe.greet();

	// We can't simply print joe.name, since the name variable is private.
	// However, we can get its string value by calling joe's accessor,
	// then we can print the returned value:
	cout << joe.get_name() << endl;

	// Create another person, sally
	person sally;

	// Call sally's mutator function to set their name to "Sally"
	sally.set_name("Sally");
	sally.greet();

	// Print sally's name
	cout << sally.get_name() << endl;
}
