// Task: Count how many words are in the file

#include <iostream>
#include <fstream>
using namespace std;

string get_filename() {
	cout << "Enter the filename: ";
	string name;
	cin >> name;
	return name;
}

int main() {
	// Ask the user for the name of the file
	string filename = get_filename();
	
	// Create the ifstream
	ifstream my_ifstream;

	// Tell the ifstream to open the file whose name is stored in `filename`
	my_ifstream.open(filename);

	// The stream extraction operator will read one "word" at a time. Let's
	// just keep using it until it fails due to triggering eof() (i.e., until
	// we've tried to read past the end of the file, including the newline
	// character at the end of it). Count how many times it runs
	// successfully---that will be the number of words in the file.
	int count = 0;
	do {
		string s;
		my_ifstream >> s;
		// If you wanted to count the number of lines in the file, you could
		// replace `my_ifstream >> s` with `getline(my_ifstream, s)`.

		// Assume the file has a newline character at the end. Then eof()
		// will be false until we read all of the words in the file, and THEN
		// read one extra time after that. If it's currently still true, then
		// that means we just successfully read another word---increment count.
		if (!my_ifstream.eof()) {
			count++;
		}

		// If my_ifstream.eof() is false, on the other hand, then we've read
		// all of the words AND read the newline character at the end.
	} while (!my_ifstream.eof());

	// Print the count
	cout << "There are " << count << " words in the file" << endl;
}
