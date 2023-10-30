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

	// Declare second_book as a copy of first_book
	book second_book = first_book;

	// Modify first_book
	first_book.write_page(1, "I dedicate this book to my mother");

	// Reassign first_book to second_book
	second_book = first_book;
	
	// Print second book's contents
	second_book.print();

	// TODO Test chain assignment
}
