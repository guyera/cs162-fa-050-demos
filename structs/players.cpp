// Task: Ask the user for an integer N. Create an array of N baseball_player
// instances. Populate the array from data from the user.

#include <iostream>

using namespace std;

struct baseball_player {
	string first_name;
	string last_name;
	double batting_average;
};

int get_num_players() {
	cout << "How many baseball players do you know? ";
	int n;
	cin >> n;
	return n;
}

void init_players(baseball_player* players, int num_players) {
	for (int i = 0; i < num_players; i++) {
		// TODO (write and call a function here) Initialize the player at index
		// i
	}
}

int main() {
	// Get n from the user
	int num_players = get_num_players();
	
	baseball_player* players;
	// TODO Create an array of N baseball players, where N is `num_players`.
	// Store it in `players`. Hint: N is NOT a compile-time constant

	// Initialize the players from input from the user
	init_players(players, num_players);

	// TODO (write and call a function here) Print the players' info

	// TODO Is there something we need to do with `players` before it falls
	// out of scope?
}
