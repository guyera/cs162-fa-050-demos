#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person {
private:
	string first_name;
	string last_name;
public:
	// nondefault constructor that accepts
	// first_name and last_name parameters
	person(string first_name, string last_name);
	person();

	void greet() const;
};

#endif
