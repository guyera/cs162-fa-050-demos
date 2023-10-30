#ifndef BASEBALL_PLAYER_H
#define BASEBALL_PLAYER_H

#include "baseball.h"

class baseball_player {
private:
	baseball b; // A baseball player has a baseball
public:
	baseball_player(); // Baseball player constructor
	~baseball_player(); // Baseball player destructor
};

#endif
