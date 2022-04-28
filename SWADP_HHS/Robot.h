#ifndef ROBOT_H
#define ROBOT_H

#include "Positie.h"

class Robot
{
public:
	Robot(Positie*);
	virtual void run();
	virtual void show();
private:
	Positie* pos;
};

#endif
