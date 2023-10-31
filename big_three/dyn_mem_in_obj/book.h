#ifndef BOOK_H
#define BOOK_H

#include "page.h"

class book {
private:
	// We have to keep track of how many pages
	// the book has (every book can have a different
	// number of pages)
	int n_pages;
	
	// A book has a dynamic array of pages. Here's
	// the pointer that points to it.
	page* pages;
public:
	// Constructor. When we construct a book, we
	// specify the number of pages. The constructor
	// is responsible for allocating the dynamic array
	// of pages. This is conventional. You'll learn why
	// later in this lecture.
	book(int n_pages);

	// We need to be able to modify the content of the
	// individual pages from outside the book class
	// after the book has been constructed. We'll have
	// a special kind of mutator for that: it accepts
	// the index of the page to modify and the string
	// content to store in it.
	void write_page(int index, const string &content);

	// We'll have a print function to print the content
	// of the book as well.
	void print() const;
};

#endif
