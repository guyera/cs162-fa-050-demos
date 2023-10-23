#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person {
private:
	string name;
public:
	void set_name(string);
	string get_name();
	void print_this();
};

#endif
