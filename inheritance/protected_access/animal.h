#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class animal {
protected:
	string name = "Tad Cooper";
public:
	animal(const string &name);
	animal();
	~animal();

	void print() const;
};

#endif
