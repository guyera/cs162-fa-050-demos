#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> permutations(const string& s) {

}

int main() {
	auto result = permutations("ace");
	for (auto& s : result) {
		cout << s << endl;
	}
}
