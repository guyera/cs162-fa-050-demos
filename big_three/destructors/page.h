#ifndef PAGE_H
#define PAGE_H

#include <string>

using namespace std;

class page {
private:
	string content;
public:
	// We want to create an array of pages in the
	// book class. Recall that creating an array
	// of objects requires the corresponding class
	// to have a default constructor.
	// We'll just use the auto-generated default
	// constructor, which will do nothing besides
	// call the default string constructor to
	// construct `content`, which will then just
	// be an empty string.

	// We'll have a setter to change the content
	// post-construction
	void set_content(const string& content);

	// And we'll have a print() function to print
	// the contents of the page to the terminal.
	void print() const;
};

#endif
