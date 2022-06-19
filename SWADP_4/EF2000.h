#pragma once
#include "Machine.h"

class Motor;
class EF2000 :	public Machine
{
public:
	EF2000(Motor*, Motor*);
	virtual ~EF2000();
	virtual Motor* motor1();
	virtual Motor* motor2();
	virtual void run();
	virtual void halt();
	virtual bool getState();
private: 
	bool state;
	Motor *mone;
	Motor *mtwo;
};

