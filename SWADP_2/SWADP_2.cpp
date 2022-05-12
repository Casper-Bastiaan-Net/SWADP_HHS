// SWADP_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Auto.h"
#include "Snelheid.h"
#include "AnalogeMeter.h"
#include "DigitaleMeter.h"

int main()
{
	Snelheid S;
	DigitaleMeter DM(&S);
	AnalogeMeter AM(&S);
	Auto A(&S);
	A.meetSnelheid();
	return 0;
}
