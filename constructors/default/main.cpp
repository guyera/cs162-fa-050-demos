#include "person.h"

int main() {
	// When a person is declared like so, the default
	// constructor gets called. So john's name will
	// be "John Doe"
	person john;
	john.greet();

	// This will call the default constructor again
	// to initialize sally. So sally's name will also
	// be "John Doe"
	person sally;
	sally.greet();

	// Let's change sally's name, now.
	sally.set_first_name("Sally");
	sally.set_last_name("Whiting");
	sally.greet();
}
