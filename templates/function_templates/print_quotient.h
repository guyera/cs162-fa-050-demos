#ifndef PRINT_QUOTIENT_H
#define PRINT_QUOTIENT_H

#include <iostream>

using namespace std;

string operator/(string a, string b) {
	return "This is the result of dividing two strings";
}

template<typename T>
void print_quotient(T numerator, T denominator) {
	cout << numerator / denominator << endl;
}

#endif
