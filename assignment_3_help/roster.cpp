#include <iostream>
#include <fstream>

#include "roster.h"

using namespace std;

roster::roster() {}

roster::roster(const roster &other)
		: students(new student[n_students]),
		n_students(other.n_students) {
	for (int i = 0; i < n_students; i++) {
		students[i] = other.students[i];
	}
}

roster& roster::operator=(const roster &other) {
	if (this == &other) {
		return *this;
	}

	if (students != nullptr) {
		delete [] students;
		students = nullptr;
	}

	n_students = other.n_students;

	students = new student[other.n_students];

	for (int i = 0; i < n_students; i++) {
		students[i] = other.students[i];
	}

	return *this;
}

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
