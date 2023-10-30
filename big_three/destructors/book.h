#ifndef BOOK_H
#define BOOK_H

#include "page.h"

class book {
private:
	int n_pages;
	page* pages;
public:
	book(int n_pages);

	void write_page(int page_index, const string &content);

	void print() const;

	// A book has dynamic memory (pages). Therefore, a book
	// needs a destructor to delete that dynamic memory. A
	// destructor must be called ~NAME, where NAME is the name
	// of the class. They must have no parameters. In this case: TODO
};

#endif
