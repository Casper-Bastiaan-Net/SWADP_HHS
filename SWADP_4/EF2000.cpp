#include "EF2000.h"
#include "Motor.h"

EF2000::EF2000(Motor* mone, Motor* mtwo): mone(mone), mtwo(mtwo), state(false) {}

EF2000::~EF2000() {}

Motor* EF2000::motor1() {
	return mone;
}

Motor* EF2000::motor2() {
	return mtwo;
}

void EF2000::run() {
	state = true;
	mone->start();
	mtwo->start();
}

void EF2000::halt() {
	state = false;
	mone->stop();
	mtwo->stop();
}

bool EF2000::getState() {
	return state;
}