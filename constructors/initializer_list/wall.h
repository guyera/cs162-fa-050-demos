#ifndef WALL_H
#define WALL_H

class wall {
private:
	double width;
	double height;
public:
	wall();

	// We now have a nondefault wall constructor
	// so that the east and west walls of our
	// house can be different dimensions
	wall(double, double);

	// Let's also build a print() function so that
	// we can see the wall's dimensions to verify
	// that everything works properly
	void print() const;
};

#endif
