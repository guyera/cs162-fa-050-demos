#include <iostream>

#include "vampire.h"

using namespace std;

// A vampire gets 10 HP
vampire::vampire() : monster(10) {}

void vampire::perform_action() {
	// On its turn, a vampire will attack the player and regenerate 1 HP.
	cout << "I vant to suck your blood!" << endl;
	heal(1);
}
