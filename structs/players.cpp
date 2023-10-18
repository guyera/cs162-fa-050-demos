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

baseball_player init_player(int j) {
	baseball_player p;
	cout << "Enter player " << (j + 1) << "'s first name: ";
	cin >> p.first_name;
	cout << "Enter the player's last name: ";
	cin >> p.last_name;
	cout << "Enter the player's batting average: ";
	cin >> p.batting_average;
	return p;
}

void init_players(baseball_player* players, int num_players) {
	for (int i = 0; i < num_players; i++) {
		// Initialize the ith player
		players[i] = init_player(i);
	}
}

void print_player(baseball_player player) {
	cout << player.first_name << " " << player.last_name
		<< " has a batting average of " << player.batting_average
		<< endl;
}

void print_players(baseball_player* players, int num_players) {
	for (int i = 0; i < num_players; i++) {
		// Print the ith player
		print_player(players[i]);
	}
}

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
