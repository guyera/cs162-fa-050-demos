#ifndef BASEBALL_PLAYER_H
#define BASEBALL_PLAYER_H

#include <iostream>

using namespace std;

struct baseball_player {
	string first_name;
	string last_name;
	double batting_average;
};

int get_num_players();

baseball_player init_player();

void init_players(baseball_player* players, int num_players);

void print_player(const baseball_player& p);

void print_players(baseball_player* players, int num_players);

#endif
