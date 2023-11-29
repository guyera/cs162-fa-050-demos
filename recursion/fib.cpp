#include <iostream>

using namespace std;

int fib(int n) {

}

int main() {
	// Print the first 15 fibonacci numbers
	constexpr int total = 15;
	for (int i = 1; i <= total; i++) {
		cout << fib(i);
		if (i != total) {
			cout << ", ";
		}
	}
	cout << endl;
}
