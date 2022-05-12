#ifndef __Auto_H
#define __Auto_H
#pragma once

class Snelheid;

class Auto
{
private:
	Snelheid* speedPointer;
public:
	Auto(Snelheid*);
	virtual void meetSnelheid();
	virtual ~Auto();
};

#endif