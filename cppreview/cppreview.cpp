#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double add(double value_1, double value_2) {
	return value_1 + value_2;
}

void print () {
	cout << "Hello, world!" << endl;
}

void change_first_element(int arr[]) {
	arr[0] = 10;
}

int main() {
	// Comments
	/*
	fdsajf
	fdsaj
	fdsaj
	*/
	cout << "Hello, world!" << endl;

	// Primitive types:
	// int
	// float
	// double
	// bool
	// char
	// long int -> long
	// short int -> short
	// long long int -> long long
	// string, if you #include <string>

	// unsigned int
	
	int x = 5;
	double y = 3.14;
	bool z = true; // false
	char c = '\'';
	long l = 63216521745721l;
	float f = 3.14f;

	x = 10;

	x = x + 1; // X is now 11

	// char x; // Not okay, already have int x
	{
		// Nested scope. It's a scope within a scope.
		cout << x << endl; // Print will 11
		int x = 100;
		cout << x << endl; // Print 100
	}

	cout << x << endl; // Print 11

	x += 3;// X is 14
	cout << x + 3 << endl; // Print 17

	cout << 10 % 3 << endl; // Prints 1; remainder after division

	x++; // X is now 15
	++x; // X is now 16

	cout << x++ << endl; // Print 16; x is now 17
	cout << ++x << endl; // x is now 18; Print 18

	cout << pow(2, 5) << endl; // Prints 32
	cout << sqrt(100) << endl; // Prints 10

	x = 3.54; // x is 3; always rounds down!

	cout << 3 / 5 << endl; // Prints 0
	cout << 3 / 5.0 << endl; // Prints 0.6

	x = 10;
	int x2 = 100;
	cout << static_cast<double>(x) / x2 << endl; // Prints 0.1
	cout << static_cast<double>(x / x2) << endl; // Prints 0.0

	cout << "Please enter a whole number: ";
	string user_input;
	cin >> user_input;

	if (3 + 7 == 10) {
		cout << "Option 1" << endl;
	} else if (12 + 8 == 20) {
		cout << "Option 2" << endl;
	} else {
		cout << "Option 3" << endl;
	}

	/*
	cout << "Enter numbers. Enter 0 to stop: ";
	int sum = 0;
	int user_input2 = -1;
	while (user_input2 != 0) {
		cin >> user_input2;
		sum += user_input2;
	}
	*/

	cout << "Enter numbers. Enter 0 to stop: ";
	int sum = 0;
	int user_input2;
	do {
		cin >> user_input2;
		sum += user_input2;
	} while(user_input2 != 0);

	// 1. Executes `int i = 0;`
	// 2. Check `i < 10`. If false, exit loop
	// 3. Execute {<body>}
	// 4. Executes `i++`
	// 5. Repeat from step 2
	for (int i = 0; i < 10; i++) {
		cout << i << endl; // Prints 0-9
	}

	double arg1 = 3.0;
	cout << add(arg1, 7.0) << endl;
	// cout << 10.0 << endl;
	print();

	constexpr int size = 100;
	int array[size]; // Creates an array of 100 integers
	array[0] = 100; // Set the first integer in our array to 100
	array[1] = 100; // Set the second integer in our array to 100
	// array[100] = 100; // Buffer overflow DON'T DO THIS!!!
	cout << array << endl; // Prints a memory address!

	change_first_element(array);
	cout << array[0] << endl; // Prints 10

	bool true_or_false = 0; // Value: false
	int some_number = true_or_false; // Value: 0

	cout << true_or_false << endl; // Prints: 0

	x = 0;
	if (x = 0) {
		cout << "Hello, world!" << endl; // Does not print!
	}
}
