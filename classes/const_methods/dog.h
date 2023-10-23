#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class dog {
private:
	string name;
public:
	// TODO What are we missing?
	string get_name();
	
	// This method is a mutator. It
	// cannot be marked as constant,
	// or else dog.cpp will fail to
	// compile.
	void set_name(string);
	
	// This function will simply print,
	// "Bark! Bark! My name is <name>!"
	// to the console. TODO What are we missing?
	void speak();
};

#endif
