#include <iostream>

#include "dog.h"

using namespace std;

// Nondefault dog constructor.
dog::dog(const string &name, bool fixed) : animal(name), fixed(fixed) {
	cout << "Nondefault dog constructor" << endl;
}

dog::dog() {
	cout << "Default dog constructor" << endl;
}

dog::~dog() {
	cout << "Dog destructor" << endl;
}

void dog::print_fixed() const {
	if (fixed) {
		cout << "I'm fixed! Great job, owner!" << endl;
	} else {
		cout << "Oh no! I'm not fixed! My owner should probably take me to a "
			"vet, unless they're a USDA-licensed dog breeder." << endl;
	}
}
