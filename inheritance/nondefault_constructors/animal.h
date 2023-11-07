#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class animal {
private:
	string name = "Tad Cooper";
public:
	// TODO Nondefault animal constructor to specify
	// the animal's name

	animal();
	~animal();

	void print() const;
};

#endif
