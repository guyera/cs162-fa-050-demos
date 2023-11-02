#include <iostream>

#include "student.h"

using namespace std;

// Default constructor, does nothing
// (Needed, though, so that we can
// create an array of students within
// the roster)
student::student() {}

// Nondefault constructor (just a member
// initializer list that initializes
// the member variables to the corresponding
// parameters)
student::student(string first_name,
		string last_name,
		int credit_hours)
		: first_name(first_name),
		last_name(last_name),
		credit_hours(credit_hours) {}

void student::print() const {
	cout << first_name << " "
		<< last_name << " is taking "
		<< credit_hours << " credit hours" << endl;
}

void student::load_data(ifstream &roster_file) {
	roster_file >> first_name;
	roster_file >> last_name;
	roster_file >> credit_hours;
}
