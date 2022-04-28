#ifndef ROBOT_H
#define ROBOT_H

#include "Positie.h"

class Robot
{
public:
	Robot(Positie*);
	virtual void run() =0;
	virtual void show() =0;
private:
	Positie* pos;
};

#endif
