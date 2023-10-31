#ifndef BOOK_H
#define BOOK_H

#include "page.h"

class book {
private:
	int n_pages;
	page* pages;
public:
	book(int n_pages);
	book(const book& existing_book);
	book& operator=(const book& other_book);

	void write_page(int page_index, const string &content);

	void print() const;

	~book();
};

#endif
