#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H
#pragma once

#include "Observer.h"

class DigitaleMeter : public Observer
{
public:
	DigitaleMeter(Subject*);
};

#endif