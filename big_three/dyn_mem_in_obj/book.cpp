#include <iostream>

#include "book.h"

using namespace std;

// Nondefault constructor.
book::book(int n_pages)
	: n_pages(n_pages),
	pages(new page[n_pages]) {}

// write_page / mutator
void book::write_page(int index, const string& content) {
	pages[index].set_content(content);
}

// Print function
void book::print() const {
	// For each page in the book...
	for (int i = 0; i < n_pages; i++) {
		// Print the page number
		cout << "----------" << endl;
		cout << "Page " << (i + 1) << ":" << endl;
		cout << "----------" << endl;

		// Print the ith page's content
		// by calling the page's own print()
		// member function
		pages[i].print();
	}
}
