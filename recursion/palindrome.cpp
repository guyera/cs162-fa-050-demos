#include <iostream>

using namespace std;

// Solution: s is a palindrome if
// and only if:
// 1. the first and last character of
// 		s are the same
// 2. the substring between the first
// 		and last characters of s also
// 		has to be a palindrome
bool palindrome(const string& s) {
	
}

int main() {
	cout << palindrome("racecar") << endl;
	cout << palindrome("hotdog") << endl;
	cout << palindrome("stats") << endl;
	cout << palindrome("hello") << endl;
}
