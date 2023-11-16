#ifndef MONSTER_H
#define MONSTER_H

class monster {
private:
	int hp = 0;
public:
	monster();
	monster(int hp);

	// This should now be a pure virtual function
	virtual void perform_action() = 0;

	void take_damage(int damage);

	void heal(int amount);
};

#endif
