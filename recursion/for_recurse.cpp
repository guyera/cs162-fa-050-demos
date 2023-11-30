#include <iostream>

using namespace std;

void for_loop(int n) {
	if (n <= 0) {
		return;
	}
	cout << "Hello" << endl;
	for_loop(n-1);
}

int main() {
	for_loop(1000000000);
}
