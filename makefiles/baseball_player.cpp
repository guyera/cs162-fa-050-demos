// Task: Ask the user for an integer N. Create an array of N baseball_player
// instances. Populate the array from data from the user.

#include <iostream>
#include "baseball_player.h"

using namespace std;

int get_num_players() {
	cout << "How many baseball players do you know? ";
	int n;
	cin >> n;
	return n;
}

baseball_player init_player() {
	baseball_player p;
	cout << "Enter the player's first name: ";
	cin >> p.first_name;
	cout << "Enter the player's last name: ";
	cin >> p.last_name;
	cout << "Enter the player's batting average: ";
	cin >> p.batting_average;
	return p;
}

void init_players(baseball_player* players, int num_players) {
	for (int i = 0; i < num_players; i++) {
		players[i] = init_player();
	}
}

void print_player(const baseball_player& p) {
	cout << p.first_name << " " << p.last_name
		<< " has a batting average of " << p.batting_average << endl;
}

void print_players(baseball_player* players, int num_players) {
	for (int i = 0; i < num_players; i++) {
		print_player(players[i]);
	}
}
