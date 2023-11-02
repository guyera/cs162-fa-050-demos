#include <iostream>
#include <fstream>

#include "roster.h"

using namespace std;

void roster::load_data(ifstream &roster_file) {
	roster_file >> n_students;
	students = new student[n_students];

	for (int i = 0; i < n_students; i++) {
		students[i].load_data(roster_file);
	}
}

void roster::print() const {
	cout << "Roster:" << endl;
	cout << "------------" << endl;
	for (int i = 0; i < n_students; i++) {
		students[i].print();
	}
	cout << "------------" << endl;
}

void roster::add_student(const student& s) {
	student* new_students = new student[n_students + 1];
	for (int i = 0; i < n_students; i++) {
		new_students[i] = students[i];
	}
	delete [] students;
	students = new_students;
	n_students++;

	students[n_students - 1] = s;
}

roster::~roster() {
	if (students != nullptr) {
		delete [] students;
		students = nullptr;
	}
}
