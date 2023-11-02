#include <fstream>

#include "school.h"

using namespace std;

int main() {
	school my_school;

	ifstream roster_file;
	roster_file.open("roster.txt");
	ifstream school_file;
	school_file.open("school.txt");

	my_school.load_data(school_file, roster_file);

	my_school.print();

	// Just to prove that our add_student() functions
	// work, I've gone ahead and created a nondefault
	// student constructor. I'm going to create a
	// student named Alex Guyer taking 1000 credit
	// hours, add them to the roster, and reprint
	// everything.
	student alex("Alex", "Guyer", 1000);
	my_school.add_student(alex);

	// Notice that Alex Guyer has been added to the
	// school
	my_school.print();

	// Also, there are no memory leaks or errors reported
	// by valgrind (I checked :)
}
