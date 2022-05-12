#include "Snelheid.h"
#include <iostream>

Snelheid::Snelheid()
{

}

float Snelheid::geef()
{
	return this->waarde;
}

void Snelheid::meet()
{
	std::cin >> this->waarde;
	this->notify();
}

Snelheid::~Snelheid()
{

}