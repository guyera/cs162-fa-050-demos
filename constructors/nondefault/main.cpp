#include "person.h"

int main() {
	// The person class has no default constructor, so
	// the following will now fail to compile:
	// person john; // FAILS TO COMPILE

	// However, we can construct a new person via our
	// nondefault constructor.
	person john("John", "Doe");
	john.greet();

	// Construct another person and call .greet() on them
	person sally("Sally", "Whiting");
	sally.greet();
}
