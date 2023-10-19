// Task: Ask the user for the name of a file. Open the file
// with an ifstream. Assume that the file contains exactly
// three words, followed by one decimal number (e.g., a double),
// each separated by a space. Read the contents of the file, and
// print the second word and the decimal number to the terminal.

#include <iostream>

// What do we have to #include?
#include <fstream>

using namespace std;

string get_filename() {
	string filename;
	cout << "Enter the filename: ";
	cin >> filename;
	return filename;
}

int main() {
	//  ask the user for the name of the file
	// they want us to write to. Store the filename in `filename`
	string filename = get_filename();

	// Create the ifstream
	ifstream my_ifstream;

	// Tell the ifstream to open the file whose name is stored in `filename`
	my_ifstream.open(filename);

	string peanuts;
	// Read the first word from the file
	my_ifstream >> peanuts;

	// Read the second word from the file
	my_ifstream >> peanuts;

	// Print the second word from the file
	cout << peanuts << endl;

	// Read the third word from the file
	my_ifstream >> peanuts;

	// Read the decimal number to the file, then print it to the terminal.
	double decimal_value;
	my_ifstream >> decimal_value;

	cout << decimal_value << endl;
}
