#pragma once
#include "Motor.h"
#include "Observer.h"

class TSensor;

class HotMotor : public Motor, public Observer
{
public: 
	HotMotor(TSensor*);
	virtual ~HotMotor();
	virtual void start();
	virtual void stop();
	virtual bool getState();
	virtual void update();
private:
	bool state;
	bool setState;
};

