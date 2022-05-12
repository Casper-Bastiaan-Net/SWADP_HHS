#include "DigitaleMeter.h"
#include "Observer.h"
#include <iostream>

DigitaleMeter::DigitaleMeter(Subject* subject) : Observer(subject)
{

}

void DigitaleMeter::update()
{
	std::cout << "digitale meter update" << std::endl;
}
