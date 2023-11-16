#ifndef MONSTER_H
#define MONSTER_H

using namespace std;

class monster {
private:
	int hp = 0;
public:
	monster();
	monster(int hp);

	// Make this function virtual to use it polymorphically
	virtual void perform_action();

	void take_damage(int damage);
	
	void heal(int amount);
};

#endif
