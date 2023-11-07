#include "animal.h"
#include "dog.h"

int main() {
	// This will:
	// 1. Call the dog default constructor on d
	// 2. The dog default constructor will IMMEDIATELY pause
	// 		and in-turn call the animal default constructor on d
	// 3. The animal default constructor's member initializer 
	//		list will execute to initialize some of d's generic-animal
	//		member variables (though it doesn't have an initializer
	//		list, so this step is irrelevant in this case)
	// 4. The animal default constructor's body will execute,
	// 		printing "Default animal constructor"
	// 5. The dog default constructor's member initializer list
	// 		will execute, initializing d's dog-specific member
	//		variables (again, it doesn't have one)
	// 6. The dog default constructor's body will execute,
	//		printing "Default dog constructor"
	dog d;

	// Here, d will fall out of scope. This will:
	// 1. Call the dog destructor on d, which will
	// 		fully execute, printing "Dog destructor"
	// 2. Automatically call the animal destructor on
	// 		d, which will fully execute, printing
	//		"Animal destructor".
}
