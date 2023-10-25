#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person {
private:
	// People will be named "Joe Schmoe" by default
	string name = "Joe Schmoe";
	int age;
public:
	person(int age);
	void greet() const;
};

#endif
