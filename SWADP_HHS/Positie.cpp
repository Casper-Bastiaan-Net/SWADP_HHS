#include "Positie.h"

Positie::Positie(int x, int y) : X(x), Y(y) {}
Positie::~Positie() {};

void Positie::move(int dx, int dy) {
	this->X += dx;
	this->Y += dy;
}

int Positie::x() {
	return this->X;
}

int Positie::y() {
	return this->Y;
}