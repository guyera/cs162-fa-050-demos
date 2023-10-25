#include <iostream>

#include "person.h"

using namespace std;

// The constructor does not initialize
// the person's name via the member initializer
// list, so the person's name takes on the
// default value "Joe Schmoe" as specified
// in the header file
person::person(int age) : age(age) {}

void person::greet() const {
	cout << "Hello! I'm "
		<< name << ", and I'm "
		<< age << " years old." << endl;
}
