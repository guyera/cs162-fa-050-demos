#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person {
private:
	string first_name;
	string last_name;
public:
	// Default constructor
	person();

	void set_first_name(const string&);
	void set_last_name(const string&);
	void greet() const;
};

#endif
