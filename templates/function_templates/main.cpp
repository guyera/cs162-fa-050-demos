#include "print_quotient.h"

int main() {
	// Print 3.0 / 5.0. Should be 0.6
	print_quotient<double>(3.0, 5.0);

	// Print 3 / 5. Should truncate to 0.
	print_quotient<string>("Hello", "World");
}
