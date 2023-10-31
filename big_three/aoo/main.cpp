#include "book.h"

int main() {
	// Create a book with 5 pages
	book first_book(5);

	// Write content into all 5 pages
	first_book.write_page(0, "Welcome to my cool book.");
	first_book.write_page(1, "I dedicate this book to the OSU CS 162 class "
						   "of fall, 2023");
	first_book.write_page(2, "This is the third page of my cool book.");
	first_book.write_page(3, "Are you having fun reading my book?");
	first_book.write_page(4, "The end.");

	// If we printed first_book's contents, it would print as expected:
	// first_book.print(); // (commented out for brevity)

	// Declare second_book as a copy of first_book. Calls the copy
	// constructor (deep copy)
	book second_book = first_book;

	// Calls the assignment operator overload that we implemented
	// (deletes second_book's existing dynamic array, and then
	// performs a deep copy)
	second_book = first_book;

	// Calls the assignment operator overload (AOO), but in this case it
	// does nothing because &second_book == &second_book
	// (this == &other_book, in the AOO implementation)
	second_book = second_book; // Does nothing. Good!

	// Now that our AOO returns a reference to `this`, this code
	// compiles just fine. second_book = first_book will resolve
	// first, which will delete second_book's existing dynamic
	// memory, deep copy first_book into second_book, and return
	// a reference to second_book. THEN, third_book will be constructed
	// as a copy of second_book (since the right assignment operation
	// returned a reference to second_book), which will call the copy
	// constructor on third_book, passing second_book as the const
	// reference parameter.
	book third_book = second_book = first_book; // Compiles just fine!

	// Modify first_book
	first_book.write_page(1, "I dedicate this book to my mother");
	
	// Print second book's contents; it's unmodified
	second_book.print();

	// The third book's contents are also unmodified :)

	// And everything gets freed properly when the books fall out of
	// scope and their dynamic arrays are deleted in the respective
	// destructors.
}
