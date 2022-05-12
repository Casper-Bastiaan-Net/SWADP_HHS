#ifndef ROBOT_H
#define ROBOT_H

class Tracker;

class Robot
{
public:
	Robot(Tracker*);
	virtual ~Robot();
	virtual void run();
	virtual void show();
private:
	Tracker* pos;
};

#endif