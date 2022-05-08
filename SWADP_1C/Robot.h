#ifndef ROBOT_H
#define ROBOT_H
#include "Tracker.h"

class Robot
{
public:
	Robot(Tracker*);
	virtual void run();
	virtual void show();
private:
	Tracker* pos;
};

#endif
