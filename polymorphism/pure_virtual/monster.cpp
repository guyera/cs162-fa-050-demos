#include <iostream>

#include "monster.h"

using namespace std;

monster::monster() {}
monster::monster(int hp) : hp(hp) {}

// TODO This is now pure virtual. What do we need to do with this
// definition?
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
