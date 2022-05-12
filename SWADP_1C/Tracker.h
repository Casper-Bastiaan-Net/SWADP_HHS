#ifndef TRACKER_H
#define TRACKER_H

class Tracker
{
public: 
	virtual ~Tracker() {};
	virtual int x() = 0;
	virtual int y() = 0;
	virtual void Move(int, int) = 0;
};
#endif