#include "animal.h"
#include "dog.h"

int main() {
	animal a;
	a.print();

	// This following fails to compile. Animals do not have a print_fixed()
	// function:
	// a.print_fixed(); // DOES NOT COMPILE

	dog d;
	d.print();

	// But this works just fine :)
	d.print_fixed();
}
