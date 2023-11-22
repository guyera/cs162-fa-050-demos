#include <iostream>

#include "coffee.h"

using namespace std;

coffee::coffee() {}

coffee::coffee(
		const string &name,
		float small_price,
		float medium_price,
		float large_price)
		: name(name),
		small_price(small_price),
		medium_price(medium_price),
		large_price(large_price) {}

void coffee::print() const {
	cout << name << ": "
		<< small_price << " / "
		<< medium_price << " / "
		<< large_price << endl;
}
