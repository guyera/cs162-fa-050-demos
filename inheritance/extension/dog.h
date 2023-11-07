#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	// TODO Not all animals can be fixed (spayed / neutered), but dogs can.
	// Add a `fixed` member variable
public:
	// TODO Add a function called print_fixed() that prints some message
	// depending on whether the dog is fixed
};

#endif
