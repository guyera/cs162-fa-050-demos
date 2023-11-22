#include "room.h"

void room::set_event(event* new_event) {
	if (this->e != nullptr) {
		delete this->e;
	}
	this->e = new_event;
}

event* room::get_event() const {
	return this->e;
}
