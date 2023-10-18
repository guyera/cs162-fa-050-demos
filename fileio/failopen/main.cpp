// Task: Ask the user for a filename until they supply a file that we can
// successfully open for reading (it must exist, and we must have read
// permissions)

#include <iostream>
#include <fstream>
using namespace std;

// Remember: We can't return ifstream objects for the same reason
// that we can't pass them by value (they can't be copied). So instead,
// we create it in main() and pass it by reference. Here, we just call
// .open() on it to tell it which file to use.
void get_file(ifstream& my_ifstream) {
	// TODO Ask the user for a filename until they give you one that
	// we can open successfully
}

int main() {
	// Create the ifstream object
	ifstream in_file;

	// Get a VALID file name from the user, and open it via the ifstream.
	get_file(in_file);

	cout << "Woo! Successfully opened the file" << endl;
}
