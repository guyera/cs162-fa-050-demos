#ifndef ROSTER_H
#define ROSTER_H

#include <fstream>

#include "student.h"

class roster {
private:
	int n_students = 0;
	student* students = nullptr;
public:
	roster();
	roster(const roster& other);
	
	roster& operator=(const roster& other);

	void load_data(ifstream &roster_file);
	void print() const;

	void add_student(const student &s);

	~roster();
};

#endif
