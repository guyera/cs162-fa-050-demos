#include <iostream>

using namespace std;

// Problem: Ask the user for positive integers until they enter "0". Compute the
// sample standard deviation of all of the positive integers that they entered.
// A sample standard deviation can be computed as follows:
// 1. Compute the mean of the values
// 2. For each value, compute its difference from the mean,
//		then square that difference
// 3. Add up all those squared differences
// 4. Divide the sum computed in step 3 by (N - 1), where N is the number
// 		of values. 
// 5. The value computed in step 4 is called the sample variance. The sample
// 		standard deviation is the square root of the sample variance.

// Fill in the TODO items to solve the problem.

int* get_values(int& output_n) {
	// Initially, our array is "empty". Let's just have our dynamic array
	// pointer point to nullptr to signify that (creating an array of size 0
	// is a strange idea).
	int* arr = nullptr;
	int n = 0; // Record how many values we've added to it.

	// We need to ask for at least one value, then repeat until they enter a 0.
	// Let's use a do-while loop
	int user_input;
	cout << "Enter positive values. Enter 0 to stop: ";
	do {
		cin >> user_input;

		if (user_input < 0) {
			// If they entered a negative number, scold them
			cout << "You must enter a positive number!" << endl;
		} else if (user_input > 0) {
			// TODO (write and call a function for this) If they entered a positive number,
			// add it to the array. Hint: The function will resize the array. It needs to know:
			// 1. The current values in the array
			// 2. The current size of the array, n
			// The function will produce:
			// 1. A pointer to a new dynamic array of size n + 1
		}
	} while (user_input != 0);

	// This function needs to produce 2 things: the array, and its size. A function
	// can only have one return value, though. This would be a good opportunity to
	// do one of two things:
	// 1. "Output" one of those two things by modifying a reference parameter
	// 2. Return a std::tuple or std::pair.
	// We've only learned about option 1, so we'll do that. TODO "Send" the size (n)
	// back to the function caller via the reference parameter, output_n

	// TODO Don't forget to return the array itself!
}

int main() {
	// Get the array and its size from the user
	int n;
	int* values = get_values(n);

	// TODO (write and call a function for this) Compute the standard deviation

	// TODO (no function is needed here---just one line of code) Print the standard deviation

	// TODO (no function is needed here) What do you need to remember to do with
	// your array before the pointer falls out of scope?
}
