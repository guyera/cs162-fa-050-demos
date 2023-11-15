#include "animal.h"
#include "dog.h"

int main() {
	animal a;
	a.print();

	// a.print_fixed(); // DOES NOT COMPILE

	dog d;
	d.print();

	// But this works just fine :)
	d.print_fixed();
}
