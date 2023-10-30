#include <iostream>

#include "page.h"

using namespace std;

void page::set_content(const string &content) {
	this->content = content;
}

void page::print() const {
	cout << content << endl;
}
