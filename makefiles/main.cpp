// Task: Ask the user for an integer N. Create an array of N baseball_player
// instances. Populate the array from data from the user.

#include <iostream>
#include "baseball_player.h"

using namespace std;

int main() {
	// Get n from the user
	int num_players = get_num_players();
	
	// Create an array of N baseball players, where N is `num_players`.
	// Store it in `players`. Hint: N is NOT a compile-time constant
	baseball_player* players = new baseball_player[num_players];

	// Initialize the players from input from the user
	init_players(players, num_players);

	// (write and call a function here) Print the players' info
	print_players(players, num_players);

	// Is there something we need to do with `players` before it falls
	// out of scope?
	delete [] players;
}
