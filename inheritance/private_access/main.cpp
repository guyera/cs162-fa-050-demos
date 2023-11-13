#include "animal.h"
#include "dog.h"

int main() {
	// Create a dog with our nondefault constructor
	dog d("Bella", true);

	// Call the dog's bark() function
	d.bark();

	// Print the dog's dog-specific information by calling
	// its dog::print_fixed() function
	d.print_fixed();
}
