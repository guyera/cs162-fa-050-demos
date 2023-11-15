#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "monster.h"

using namespace std;

class vampire : public monster {
public:
	vampire();

	void perform_action();
};

#endif
