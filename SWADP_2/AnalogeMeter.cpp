#include "AnalogeMeter.h"
#include "Observer.h"
#include <iostream>

AnalogeMeter::AnalogeMeter(Subject* subject) : Observer(subject)
{

}

void AnalogeMeter::update()
{
	std::cout << "analoge meter update" << std::endl;
}