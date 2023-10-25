#ifndef HOUSE_H
#define HOUSE_H

#include "wall.h"

class house {
private:
	wall north_wall;
	wall east_wall;
	wall south_wall;
	wall west_wall;
public:
	house();
	
	// Let's also build a print() function so that
	// we can see the walls' dimensions to verify
	// that everything works properly
	void print() const;
};

#endif
