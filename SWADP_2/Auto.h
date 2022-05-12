#ifndef __Auto_H
#define __Auto_H
#pragma once

#include "Snelheid.h"

class Auto
{
private:
	Snelheid* speedPointer;
public:
	Auto(Snelheid*);
	void meetSnelheid();
	virtual ~Auto();
};

#endif