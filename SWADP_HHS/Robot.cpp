#include "Robot.h"
#include "Positie.h"
#include <iostream>

Robot::Robot(Positie* p): pos(p) {}
Robot::~Robot() {}

void Robot::run() {
	this->pos->move(20, 10);
}

void Robot::show() {
	std::cout << "x: " << this->pos->x() << " y: " << this->pos->y() << std::endl;
}