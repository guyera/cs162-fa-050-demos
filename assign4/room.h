#ifndef ROOM_H
#define ROOM_H

#include "event.h"

class room {
private:
	event *e = nullptr;
public:
	void set_event(event *new_event);
	event* get_event() const;

	// TODO You'll need some other stuff in
	// here as well (e.g., destructor)
};

#endif
