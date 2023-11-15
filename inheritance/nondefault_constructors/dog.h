#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal {
private:
	bool fixed = false;
public:
	// Nondefault dog constructor.
	dog(const string &name, bool fixed);

	dog();
	~dog();

	void print_fixed() const;
};

#endif
