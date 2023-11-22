#ifndef EVENT_H
#define EVENT_H

class event {
private:
	// Hint: There are a few ways to handle the
	// debug characters that are printed to the
	// board for the various events. One way is
	// to say that every event "has a" debug character,
	// like so:
	char debug_character;
	// You might then initialize this character in
	// an event constructor, as below.
public:
	// Constructor that sets this event's debug
	// character to the specified value. When a derived
	// class (such as a Wumpus) is constructed, it
	// will pass its respective character up to this
	// event constructor through its member initializer
	// list. See bats.cpp for an example.
	event(char debug_character);

	// You might also need a getter for it, so that
	// you can obtain it and print it when printing
	// the board
	char get_debug_character() const;

	// TODO You'll need some other stuff in this class
	// as well (e.g., virtual functions, virtual destructor)
};

#endif
