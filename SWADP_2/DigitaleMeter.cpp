#include "DigitaleMeter.h"
#include "Snelheid.h"
#include <iostream>

DigitaleMeter::DigitaleMeter(Subject* subject) : Observer(subject)
{
}

void DigitaleMeter::update()
{
	Snelheid *speed = dynamic_cast<Snelheid*>(this->getSubject());
	std::cout << "digitale meter update: " << speed->geef() << std::endl;
}

DigitaleMeter::~DigitaleMeter()
{
}