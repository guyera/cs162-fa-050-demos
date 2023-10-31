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
	if (pages != nullptr) {
		delete [] pages;
		pages = nullptr;
	}
}
