#include "Robot.h"
#include "Tracker.h"
#include <iostream>

Robot::Robot(Tracker* p): pos(p) {}
Robot::~Robot() {}

void Robot::run() {
	this->pos->Move(20, 10);
}

void Robot::show() {
	std::cout << "x: " << this->pos->x() << " y: " << this->pos->y() << std::endl;
}