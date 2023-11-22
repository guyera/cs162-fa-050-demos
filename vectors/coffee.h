#ifndef COFFEE_H
#define COFFEE_H

#include <string>

using namespace std;

class coffee {
private:
	string name;
	float small_price = 0.0;
	float medium_price = 0.0;
	float large_price = 0.0;
public:
	coffee();
	coffee(
		const string &name,
		float small_price,
		float medium_price,
		float large_price
	);

	void print() const;
};

#endif
