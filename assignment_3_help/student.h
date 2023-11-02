#ifndef STUDENT_H
#define STUDENT_H

#include <fstream>
#include <string>
using namespace std;

class student {
private:
	string first_name;
	string last_name;
	int credit_hours = 0;
public:
	// Default constructor
	student();

	// Nondefault constructor
	student(
		string first_name,
		string last_name,
		int credit_hours
	);

	void print() const;

	void load_data(ifstream& roster_file);
};

#endif
