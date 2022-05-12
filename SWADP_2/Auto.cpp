#include "Auto.h"
#include "Snelheid.h"

Auto::Auto(Snelheid* ptr) : speedPointer(ptr)
{
}

void Auto::meetSnelheid()
{
	this->speedPointer->meet();
}

Auto::~Auto()
{
}