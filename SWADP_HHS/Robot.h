#ifndef ROBOT_H
#define ROBOT_H

class Positie;

class Robot
{
public:
	Robot(Positie*);
	virtual ~Robot();
	virtual void run();
	virtual void show();
private:
	Positie* pos;
};

#endif
