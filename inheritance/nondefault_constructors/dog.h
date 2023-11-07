#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	bool fixed = false;
public:
	// TODO Nondefault dog constructor.

	dog();
	~dog();

	void print_fixed() const;
};

#endif
