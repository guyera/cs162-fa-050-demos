#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	bool fixed = false;
public:
	dog(const string &name, bool fixed);
	dog();
	~dog();

	// Overridden print() function
	void print() const;
};

#endif
