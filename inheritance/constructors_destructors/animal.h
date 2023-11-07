#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class animal {
private:
	string name = "Tad Cooper";
public:
	// animal default constructor
	animal();

	// animal destructor
	~animal();

	void print() const;
};

#endif
