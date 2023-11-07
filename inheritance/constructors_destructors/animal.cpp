#include <iostream>

#include "animal.h"

using namespace std;

animal::animal() {
	cout << "Default animal constructor" << endl;
}

animal::~animal() {
	cout << "Animal destructor" << endl;
}

void animal::print() const {
	cout << "Hello! I'm a talking animal, and my name is " << name << endl;
}
