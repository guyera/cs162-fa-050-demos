#ifndef GAME_H
#define GAME_H

#include <vector>

#include "room.h"

using namespace std;

class game {
private:
	vector<vector<room>> grid;
public:
	void setup(int rows, int columns);
	void insert_event(event* e);

	// TODO You'll need some other stuff
	// in here as well
};

#endif
