#include <iostream>

#include "zombie.h"

using namespace std;

zombie::zombie() : monster(5) {}

void zombie::perform_action() {
	// On its turn, a zombie will attack if it has lost all of its sanity,
	// else it will just lose 0.5 sanity
	if (sanity <= 0) {
		cout << "BLARGH! I'm attacking the closest thing to me!" << endl;
	} else {
		sanity -= 0.5;
	}
}

