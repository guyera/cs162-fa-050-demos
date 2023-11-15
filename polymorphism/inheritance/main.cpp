#include <iostream>

#include "zombie.h"
#include "vampire.h"

using namespace std;

// This function allows each monster to do their turn
void do_turn(int turn, zombie *z, int n_zombies, vampire *v, int n_vampires) {
	cout << "--------------" << endl;
	cout << "Turn " << turn << ": " << endl;
	cout << "--------------" << endl;

	// Perform each zombie's turn
	for (int i = 0; i < n_zombies; i++) {
		z[i].perform_action();
	}
	// Perform each vampire's turn
	for (int i = 0; i < n_vampires; i++) {
		v[i].perform_action();
	}
}

int main() {
	// Create our arrays of zombies and vampires
	int n_z = 5; // 5 zombies
	zombie *zombies = new zombie[n_z];
	int n_v = 3; // 3 vampires
	vampire *vampires = new vampire[n_v];

	// Do three turns
	do_turn(1, zombies, n_z, vampires, n_v);
	do_turn(2, zombies, n_z, vampires, n_v);

	// By the third turn, our zombies will have lost their
	// sanity, so they will start attacking as well
	do_turn(3, zombies, n_z, vampires, n_v);
}
