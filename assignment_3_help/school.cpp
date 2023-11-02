#include <iostream>
#include <fstream>

#include "school.h"

using namespace std;


void school::load_data(ifstream& school_file, ifstream& roster_file) {
	school_file >> name;
	school_file >> city;
	school_file >> state;

	r.load_data(roster_file);
}

void school::print() const {
	cout << name << ", " << city << ", " << state << endl << endl;

	r.print();
}

void school::add_student(const student& s) {
	r.add_student(s);
}
