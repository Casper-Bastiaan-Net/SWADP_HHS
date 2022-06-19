#include "Temp300.h"

Temp300::Temp300(): temp(20){}

Temp300::~Temp300(){}

void Temp300::read() {
	//TODO: replace this with actual sensor measurements
	if (temp < 80) {
		temp += 10;
	}
	else {
		temp -= 14;
	}

	this->notify();
}

int Temp300::temperatuur() {
	return temp;
}