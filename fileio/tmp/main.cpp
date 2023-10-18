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
	// they want us to write to.
	string filename = get_filename();
	
	// Create the ifstream
	ifstream my_ifstream;

	// Tell the ifstream to open the file whose name is stored in `filename`
	my_ifstream.open(filename);
	
	// Read the first word from the file. Yes, even though we don't need
	// to print it to the terminal, we still have to read it in order to get
	// "past" it and proceed to read the second word.
	string word;
	my_ifstream >> word;

	// Read the second word from the file, then print it to the terminal
	my_ifstream >> word;
	cout << "Second word: " << word << endl;

	// Read the third word from the file.
	my_ifstream >> word;

	// Read the decimal number to the file, then print it to the terminal.
	double decimal_value;
	my_ifstream >> decimal_value;
	cout << "Decimal value: " << decimal_value << endl;
}
