#ifndef TSENSOR_H
#define TSENSOR_H
#include "Observer.h"

class Motor;

class TSensor {
public: 
	TSensor() {};
	virtual ~TSensor() {};
	virtual void read() = 0;
	virtual int temperatuur() = 0;
	virtual void setMotor(Motor* motor) { M = motor; };
	virtual Motor* motor() { return M; };
private:
	Motor* M;
};

#endif