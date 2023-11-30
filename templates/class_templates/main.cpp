#include <iostream>

#include "vector.h"

using namespace std;

int main() {
	vector<int> my_integers;
	vector<string> my_strings;
	my_integers.push_back(10);
	cout << my_integers.at(0) << endl;

	my_strings.push_back("Hello");
	my_strings.push_back("World");
	cout << my_strings.at(1) << endl;
}
