// Task: Count how many words are in the file

#include <iostream>
#include <fstream>
using namespace std;

// Remember: We can't return ifstream objects for the same reason
// that we can't pass them by value (they can't be copied). So instead,
// we create it in main() and pass it by reference. Here, we just call
// .open() on it to tell it which file to use.
void get_file(ifstream& my_ifstream) {
	// Ask the user for a filename until they give you one that
	// we can open successfully
	do {
		cout << "Enter the filename: ";
		string name;
		cin >> name;
		
		// If there is a leftover fail boolean set to true, reset it
		// to false
		my_ifstream.clear();

		// Try to open the file
		my_ifstream.open(name);

		// If we failed to open the file, scold the user and repeat
		if (my_ifstream.fail()) {
			cout << "Couldn't open the file!" << endl;
		}
	} while(my_ifstream.fail());
}

int main() {
	// Create the ifstream object
	ifstream in_file;

	// Get a VALID file name from the user, and open it via the ifstream
	get_file(in_file);

	cout << "Woo! Successfully opened the file" << endl;
}
