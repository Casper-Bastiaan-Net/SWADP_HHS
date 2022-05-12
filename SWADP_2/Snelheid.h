#ifndef __Snelheid_H
#define __Snelheid_H
#pragma once

class Snelheid : public Subject
{
private:
	float waarde = 0;
public:
	Snelheid();
	virtual void meet();
	virtual float geef();
	virtual ~Snelheid();
};

#endif