#include <iostream>

#include "person.h"

using namespace std;

// define the name mutator
void person::set_name(string the_name) {
	name = the_name;
}

// define the name accessor
string person::get_name() {
	return name;
}
