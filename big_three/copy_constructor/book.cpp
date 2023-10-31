#include <iostream>

#include "book.h"

using namespace std;

book::book(int n_pages) : n_pages(n_pages), pages(new page[n_pages]) {}

void book::write_page(int page_index, const string &content) {
	pages[page_index].set_content(content);
}

void book::print() const {
	for (int i = 0; i < n_pages; i++) {
		cout << "----------" << endl;
		cout << "Page " << (i + 1) << ":" << endl;
		cout << "----------" << endl;

		pages[i].print();
	}
}

// Destructor definition
book::~book() {
	// We don't really need the if statement for this
	// particular example since pages is always initialized
	// upon construction (this if statement condition will
	// always be true). But it's good practice anyways---some
	// objects may have optional dynamic memory, and you'd use
	// nullptr to represent the fact that nothing was ever
	// allocated (and thus doesn't need to be deleted).
	if (pages != nullptr) {
		delete [] pages;
		// It's also good practice to reassign pointers to
		// nullptr after deleting their memory. But again,
		// not technically necessary (this book object is about
		// to be freed from memory anyways, so the pages
		// pointer will cease to exist momentarily)
		pages = nullptr;
	}
}

// Copy constructor
book::book(const book& existing_book)
		: n_pages(existing_book.n_pages),
		pages(new page[existing_book.n_pages]) {
	for (int i = 0; i < n_pages; i++) {
		// one at a time, copy the existing_book's ith
		// page into this book's ith page
		pages[i] = existing_book.pages[i];
	}
}
