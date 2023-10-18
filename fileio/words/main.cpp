// Task: Ask the user for the name of a file. Open the file
// with an ifstream. Assume that the file contains exactly
// three words, followed by one decimal number (e.g., a double),
// each separated by a space. Read the contents of the file, and
// print the second word and the decimal number to the terminal.

#include <iostream>

// TODO What do we have to #include?

int main() {
	string filename;
	// TODO (write and call a function) ask the user for the name of the file
	// they want us to write to. Store the filename in `filename`
	
	// Create the ifstream
	ifstream my_ifstream;

	// TODO Tell the ifstream to open the file whose name is stored in `filename`
	
	// TODO Read the first word from the file. Yes, even though we don't need
	// to print it to the terminal, we still have to read it in order to get
	// "past" it and proceed to read the second word.

	// TODO Read the second word from the file, then print it to the terminal

	// TODO Read the third word from the file. Again, even though we don't have
	// to print it, we still have to read it to get to the decimal number.

	// TODO Read the decimal number to the file, then print it to the terminal.
}
