#pragma once
#include "TSensor.h"
#include "Observer.h"
class Temp300 :public TSensor, public Subject
{
public: 
	Temp300();
	virtual ~Temp300();
	virtual void read();
	virtual int temperatuur();
private:
	int temp;
};

