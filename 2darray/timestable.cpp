#include <iostream>

using namespace std;

// Problem: Create a 12x10 times table and store it all in
// memory at once (i.e., you'll need to store all 120 values
// in memory simultaneously). Then print it neatly.

void populate(int table[][10]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			int product = (i + 1) * (j + 1);
			table[i][j] = product;
		}
	}
}

int main() {
	int table[12][10];
	populate(table);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
}
