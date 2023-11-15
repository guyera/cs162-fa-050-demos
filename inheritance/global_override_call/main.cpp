#include "animal.h"
#include "dog.h"

int main() {
	// Create a dog with our nondefault constructor
	dog d("Bella", true);

	// Call d's animal::print() function to print its
	// generic-animal information (its name)
	d.animal::print(); // This will ONLY print the dog's name

	// Call d's dog::print() function to print its
	// dog-specific information (whether its fixed)
	d.print();
}
