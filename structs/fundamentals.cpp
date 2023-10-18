#include <iostream>

using namespace std;

struct baseball_player {
	string first_name;
	string last_name;
	int age;
	double batting_average;
}; // <--- mind the semicolon

int main() {
	baseball_player joe;
	joe.first_name = "Joe";
	joe.last_name = "Redfield";
	joe.age = 61;
	joe.batting_average = 0.1;

	baseball_player sally;
	sally.first_name = "Sally";
	sally.last_name = "Whiting";
	sally.age = 41;
	sally.batting_average = 0.25;

	cout << joe.last_name << endl;
	cout << sally.last_name << endl;
}
