#include <iostream>

#include "wall.h"

using namespace std;

// Default ctor. Suppose the "default wall"
// is 15' x 8'.
wall::wall() {
	width = 15;
	height = 8;

	cout << "The wall constructor is being called" << endl;
}
