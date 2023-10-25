#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person {
private:
	string name;
public:
	// Set the person's private name variable to the specified string value
	// mutator
	void set_name(string the_name);

	// Retrieve (return) the value of the person's private name variable
	// accessor
	string get_name();
};

#endif
