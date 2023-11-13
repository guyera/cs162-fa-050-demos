#include <iostream>

#include "dog.h"

using namespace std;

dog::dog(const string &name, bool fixed) : animal(name), fixed(fixed) {}

dog::dog() {}

dog::~dog() {}

// Here's our bark() function definition.
// Every dog is an animal, and every animal has
// a name member variable. And yet...
void dog::bark() const {
	// This will fail to compile because the dog
	// class does not have access to the private
	// member `name` of the animal class.
	cout << "Bark! Bark! My name is " << name << endl;
}

void dog::print_fixed() const {
	if (fixed) {
		cout << "I'm fixed! Great job, owner!" << endl;
	} else {
		cout << "Oh no! I'm not fixed! My owner should probably take me to a "
			"vet, unless they're a USDA-licensed dog breeder." << endl;
	}
}
