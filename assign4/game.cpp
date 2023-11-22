#include <cstdlib>

#include "game.h"
#include "bats.h"

// NOTE: If you want to call this multiple times
// (e.g., in a loop for the extra credit to
// keep playing until the player chooses to quit),
// you'll have to make sure to "clear" the grid
// before setting it up. There is a .clear() function
// on vectors that does this---it empties the vector
// of all of its contents.
void game::setup(int rows, int columns) {
	// At this point, grid is empty

	// Add the rows
	this->grid.resize(rows);

	// Resize each row
	for (int i = 0; i < rows; i++) {
		grid.at(i).resize(columns);
	}

	// Randomly place a bats object inside
	// one of our grid's rooms

	// Choose a random row, and choose a random
	// column, then place the bats there
	this->insert_event(new bats);
	this->insert_event(new bats);

	// TODO Do it a few more times for the other
	// events
}

void game::insert_event(event* e) {
	int row_idx;
	int col_idx;
	do {
		// Choose a random row
		row_idx = rand() % grid.size();
		// Choose a random column
		col_idx = rand() % (grid.at(0).size());
	} while(grid.at(row_idx).at(col_idx).get_event() != nullptr);

	// Place the event
	grid.at(row_idx).at(col_idx).set_event(e);
}
