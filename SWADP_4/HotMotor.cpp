#include "HotMotor.h"
#include "TSensor.h"

HotMotor::HotMotor(TSensor* s): Motor(s), Observer(dynamic_cast<Subject*>(s)) {}

HotMotor::~HotMotor() {}

void HotMotor::start() {
	setState = true;
	update();
}

void HotMotor::stop() {
	setState = false;
	update();
}

bool HotMotor::getState() {
	return state;

}

void HotMotor::update() {
	if(tsensor()->temperatuur() > 100) {
		state = false;
	}
	else if (setState) {
		state = true;
	}
}