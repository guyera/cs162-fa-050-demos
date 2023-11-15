#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	bool fixed = true;
public:
	void print_fixed() const;
};

#endif
