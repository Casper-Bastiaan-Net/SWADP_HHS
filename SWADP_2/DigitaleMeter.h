#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H
#pragma once

class DigitaleMeter : public Observer
{
public:
	DigitaleMeter(Subject*);
	virtual void update();
	virtual ~DigitaleMeter();
};

#endif