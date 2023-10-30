#include "baseball_player.h"

int main() {
	// This will construct the baseball p.b, and THEN construct the
	// baseball_player p
	baseball_player p;

	// When p falls out of scope, baseball_player p's destructor will get
	// called, and THEN baseball p.b's destructor will get called
}
