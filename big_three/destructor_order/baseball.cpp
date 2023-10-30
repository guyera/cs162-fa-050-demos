#include <iostream>

#include "baseball.h"

using namespace std;

baseball::baseball() : diameter(5) {
	cout << "Baseball constructor" << endl;
}

baseball::~baseball() {
	cout << "Baseball destructor" << endl;
}
