#include <iostream>

using namespace std;

// Problem: Ask the user for an integer N. Then, as the user for N strings.
// Store them all in an array. Print them in backwards order.

// Fill in the TODO items to solve the problem.

// Get N from the user and return it. No error handling required here.
int get_n() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	return n;
}


void populate(string* sentence, int n) {
	for (int i = 0; i < n; i++) {
		// Ask the user for a string
		cout << "Enter a word: ";
		cin >> sentence[i];
	}
}


void print_backwards(string* sentence, int n) {
	for (int i = n - 1; i >= 0; i--) {
		cout << sentence[i] << " ";
	}
}


int main() {
	// Ask the user for integer N
	int n = get_n();

	// Create an array of N strings.
	// Hint: N is NOT a compile-time constant!
	string* sentence = new string[n];

	// (Write and call a function for this part). Fill the array with elements
	// received by the user. Hint: Arrays are pointers (dynamic arrays are literally
	// handled with pointers). If you pass that array into a function and modify the contents,
	// what will it do to the argument array?
	populate(sentence, n);
	
	// (Write and call a function for this part). Print the elements backward
	print_backwards(sentence, n);
	

	// What do you need to remember to do with your array before the pointer
	// falls out of scope?
	delete [] sentence;

}
