#include "animal.h"
#include "dog.h"

int main() {
	// Create a dog with our nondefault constructor
	dog bella("Bella", false);

	// Print the dog's generic-animal data by calling its
	// animal::print() function
	bella.print();

	// Print the dog's dog-specific information by calling
	// its dog::print_fixed() function
	bella.print_fixed();
}
