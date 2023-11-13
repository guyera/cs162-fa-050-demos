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

	// Let's try to add a bark() function to the
	// dog class that prints "Bark! Bark!", followed by
	// the dog's name, to the terminal.
	void bark() const;

	void print_fixed() const;
};

#endif
