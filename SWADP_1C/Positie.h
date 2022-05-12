#ifndef POSITIE_H
#define POSITIE_H
#include "Tracker.h"

class Positie: public Tracker
{
public:
	Positie(int, int);
	virtual ~Positie();
	virtual int x();
	virtual int y();
	virtual void Move(int, int);
private:
	int X;
	int Y;
};

#endif