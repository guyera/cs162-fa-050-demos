#include <iostream>

#include "monster.h"

using namespace std;

monster::monster() {}
monster::monster(int hp) : hp(hp) {}

// There's no such thing as a "generic monster". Every monster in the game
// will be of some specific variety, so this is just a "placeholder"
// member function.
void monster::perform_action() {
	cout << "I'm just a generic monster; I don't do anything in specific "
			"on my turn" << endl;
}

void monster::take_damage(int damage) {
	hp -= damage;
}

void monster::heal(int amount) {
	hp += amount;
}
