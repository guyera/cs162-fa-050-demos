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

	// Print the contents of the book (works as expected)
	first_book.print();
}
