#include <iostream>

#include "dog.h"

using namespace std;

// Implement the dog::print_fixed() function
void dog::print_fixed() const {
	if (fixed) {
		cout << "Good job, owner! I'm fixed" << endl;
	} else {
		cout << "Uh oh! I'm not fixed. My owner should take me to a vet, unless they're a certified dog breeder" << endl;
	}
}
