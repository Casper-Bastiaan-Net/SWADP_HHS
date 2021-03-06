#ifndef __AnalogeMeter_H
#define __AnalogeMeter_H
#pragma once

#include "Observer.h"

class AnalogeMeter : public Observer
{
public:
	AnalogeMeter(Subject*);
	virtual void update();
	virtual ~AnalogeMeter();
};

#endif