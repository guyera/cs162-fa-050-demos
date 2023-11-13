#include <iostream>

#include "animal.h"

using namespace std;

animal::animal(const string &name) : name(name) {}

animal::animal() {}

animal::~animal() {}

void animal::print() const {
	cout << "Hello! I'm a talking animal, and my name is " << name << endl;
}
