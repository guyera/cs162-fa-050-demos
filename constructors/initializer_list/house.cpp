#include <iostream>

#include "house.h"

using namespace std;

// Default constructor. Let's say the default
// house has north and south walls that are each
// 15 ft wide and 8 ft tall (which is also the default
// size of a wall, according to the wall default ctor),
// but east and west walls that are each 12 ft wide and
// 8 ft tall. We need to tell the default house constructor
// to construct the east and west walls via the nondefault
// wall constructor, passing in 12 and 8 as the arguments.
// We do that in the following member initializer list: TODO

// Here's the print function:
void house::print() const {
	cout << "North wall: ";
	north_wall.print();
	
	cout << "East wall: ";
	east_wall.print();
	
	cout << "South wall: ";
	south_wall.print();
	
	cout << "West wall: ";
	west_wall.print();
}
