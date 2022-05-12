#include "AnalogeMeter.h"
#include "Observer.h"
#include "Snelheid.h"
#include <iostream>

AnalogeMeter::AnalogeMeter(Subject* subject) : Observer(subject)
{

}

void AnalogeMeter::update()
{
	Snelheid* speed = dynamic_cast<Snelheid*>(this->getSubject());
	std::cout << "analoge meter update: " << speed->geef() << std::endl;
}

AnalogeMeter::~AnalogeMeter()
{
}