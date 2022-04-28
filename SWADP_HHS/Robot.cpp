#include "Robot.h"
#include <iostream>

Robot::Robot(Positie* p): pos(p) {}

void Robot::run() {
	//do stuff
}

void Robot::show() {
	std::cout << "show stuff" << std::endl;
}