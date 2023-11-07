#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	bool fixed = false;
public:
	// dog default constructor
	dog();

	// dog destructor
	~dog();

	void print_fixed() const;
};

#endif
