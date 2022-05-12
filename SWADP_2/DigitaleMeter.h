#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H
#pragma once

#include "Observer.h"
#include "Snelheid.h"
#include <iostream>

class DigitaleMeter : public Observer
{
public:
	DigitaleMeter(Subject*);
	virtual void update();
	virtual ~DigitaleMeter();
};

#endif