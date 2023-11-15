#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "monster.h"

using namespace std;

class zombie : public monster {
private:
	double sanity = 1;
public:
	zombie();

	void perform_action();
};

#endif
