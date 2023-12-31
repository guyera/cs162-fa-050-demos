#include <iostream>

#include "zombie.h"
#include "vampire.h"

using namespace std;

// This function allows each monster to do their turn
// Modify this function to avoid object slicing
void do_turn(int turn, monster** m, int n_monsters) {
	cout << "--------------" << endl;
	cout << "Turn " << turn << ": " << endl;
	cout << "--------------" << endl;

	// Perform each monster's turn
	for (int i = 0; i < n_monsters; i++) {
		m[i]->perform_action();
	}
}

int main() {
	// Create our array of monsters
	int n_m = 8; // 8 total monsters

	// How do we modify this to avoid object slicing?
	monster **monsters = new monster*[n_m];

	// The first 5 monsters are zombies
	for (int i = 0; i < 5; i++) {
		// Create a zombie and store it in our monster array
		// Modify this loop
		monsters[i] = new zombie;
	}

	// The last 3 monsters are vampires
	for (int i = 5; i < 8; i++) {
		// Modify this loop
		monsters[i] = new vampire;
	}

	// Do three turns
	do_turn(1, monsters, n_m);
	do_turn(2, monsters, n_m);

	// By the third turn, our zombies will have lost their
	// sanity, so they will start attacking as well
	do_turn(3, monsters, n_m);

	for (int i = 0; i < n_m; i++) {
		delete monsters[i];
	}
	delete [] monsters;
}
