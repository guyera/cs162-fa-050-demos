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

	// Let's copy the book
	book second_book = first_book;
	
	// Now, let's modify the second page of first_book
	first_book.write_page(1, "I dedicate this book to my mother");

	// If we printed the contents of first_book, it would print
	// out all 5 pages again, where the 2nd page is updated as in line 22.
	// first_book.print(); // (commented out for brevity)

	// However, this is where it gets interesting! If we print the contents
	// of second_book, we can see that its second page has ALSO been modified!
	second_book.print();

	// Prediction: a segmentation fault / invalid read
	// will occur right here at the very end of main,
	// within a book destructor
}
