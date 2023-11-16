#include <iostream>

#include "monster.h"

using namespace std;

monster::monster() {}
monster::monster(int hp) : hp(hp) {}

void monster::take_damage(int damage) {
	hp -= damage;
}

void monster::heal(int amount) {
	hp += amount;
}
