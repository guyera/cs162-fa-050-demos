#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person {
private:
	string first_name;
	string last_name;
public:
	// TODO nondefault constructor that accepts
	// first_name and last_name parameters

	void greet() const;
};

#endif
