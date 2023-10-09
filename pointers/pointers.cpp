#include <iostream>
#include <string>

using namespace std;

void change(string* p) {
	*p = "Hello";
}

void change_ref(string& r) {
	r = "world";
	//string s2 = "hello";
	//r = s2; // What does this do? Changes s back to "hello"
}

int main() {
	string s = "world";
	cout << s << endl; // Prints: world
	change(&s);
	cout << s << endl; // Prints: hello

	change_ref(s);
	cout << s << endl; // Prints: world

	string* pointer = &s;
	string& ref = s;
	// string& ref2; // DOES NOT COMPILE

	string* null_ptr = nullptr; // Points to nothing!
	if (null_ptr != nullptr) {
		*null_ptr = "hello"; // Does not run!
	}

	// int* my_pointer;
	// *my_pointer = 100; // What does this do? REALLY BAD IDEA!

	int x;
	x = 10;
	// peanut_butter is a pointer to a constant integer
	int const * peanut_butter = &x;
	x = 12;
	// *peanut_butter = 5; // DOES NOT COMPILE
	int y;
	peanut_butter = &y;
	
	// jelly is a constant pointer to an integer
	int * const jelly = &x;
	*jelly = 10;
	// jelly = &y; // DOES NOT COMPILE

	int const & spam = x;

	return 0;
}
