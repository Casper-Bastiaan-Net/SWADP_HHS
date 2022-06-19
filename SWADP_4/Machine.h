#ifndef MACHINE_H
#define MACHINE_H

class Motor;
class Mone;
class Mtwo;

class Machine {
public:
	virtual ~Machine() {} ;
	virtual Motor* motor1() = 0;
	virtual Motor* motor2() = 0;
	virtual bool getState() = 0;
	virtual void run() = 0;
	virtual void halt() = 0;
private:
	Mone* mone;
	Mtwo* mtwo;
};

#endif