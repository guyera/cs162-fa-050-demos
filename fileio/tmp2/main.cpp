// Task: Print the Nth line in the file, where N is supplied by the user

#include <iostream>
#include <fstream>
using namespace std;

string get_filename() {
	cout << "Enter the filename: ";
	string name;
	cin >> name;
	return name;
}

int get_n() {
	cout << "Which line do you want to be printed? ";
	int n;
	cin >> n;
	return n;
}

int main() {
	// Ask the user for the name of the file
	string filename = get_filename();
	
	// Create the ifstream
	ifstream my_ifstream;

	// Tell the ifstream to open the file whose name is stored in `filename`
	my_ifstream.open(filename);

	// Get N from the user
	int n = get_n();

	// Read the first N - 1 lines to "skip" them
	string line;
	for (int i = 0; i < n - 1; i++) {
		getline(my_ifstream, line);
	}

	// Read the nth line and print it
	getline(my_ifstream, line);
	cout << "The nth line is:" << endl;
	cout << line << endl;
}
