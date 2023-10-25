#include <iostream>

#include "house.h"

using namespace std;

// Default constructor. Let's say the default
// house has north and south walls that are each
// 15 ft wide and 8 ft tall (which is also the default
// size of a wall, according to the wall default ctor),
// but east and west walls that are each 12 ft wide and
// 8 ft tall.
house::house() {
	cout << "The house constructor is being called" << endl;
}
