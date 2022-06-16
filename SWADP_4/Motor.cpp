#include "Motor.h"
#include "TSensor.h"

Motor::Motor(TSensor* sensor) : S(sensor) { S->setMotor(this); }