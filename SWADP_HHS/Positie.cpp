#include "Positie.h"

Positie::Positie(int x, int y) : X(x), Y(y) {};

void Positie::move(int dx, int dy) {
	this->X += dx;
	this->Y += dy;
}