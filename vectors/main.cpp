#include <iostream>
#include <vector>

#include "coffee.h"

using namespace std;

int main() {
	coffee mocha("Mocha", 1.00, 2.00, 3.00);
	vector<coffee> my_vector(8, mocha);

	// Iterators
	// To get an iterator that points to the first element
	// in my_vector: my_vector.begin()

	// To get an iterator that points just after the last
	// element in my_vector: my_vector.end()

	// To get an iterator that points to the third element
	// in my_vector: (my_vector.begin() + 2)

	// Resizing vectors
	my_vector.resize(6);

	my_vector.resize(7);

	coffee latte("Latte", 0.10, 0.20, 0.30);
	my_vector.push_back(latte);

	coffee cappuccino("Cappuccino", 2.00, 4.00, 6.00);
	my_vector.insert(my_vector.begin() + 2, cappuccino);

	my_vector.erase(my_vector.begin()++);
	
	cout << my_vector.size() << endl;
	for (int i = 0; i < my_vector.size(); i++) {
		my_vector.at(i).print();
	}

	// Rarely, you may want to manipulate / view
	// capacity directly
	cout << my_vector.capacity() << endl;
	my_vector.reserve(20);
	my_vector.shrink_to_fit();

}
