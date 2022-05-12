#include "DigitaleMeter.h"

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