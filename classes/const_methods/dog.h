#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class dog {
private:
	string name;
public:
	// What are we missing?
	string get_name() const;
	
	// This method is a mutator. It
	// cannot be marked as constant,
	// or else dog.cpp will fail to
	// compile.
	void set_name(string);
	
	// This function will simply print,
	// "Bark! Bark! My name is <name>!"
	// to the console.
	void speak() const;
};

#endif
