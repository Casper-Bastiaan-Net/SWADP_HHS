#include <iostream>
#include "Machine.h"
#include "Temp300.h"
#include "HotMotor.h"
#include <windows.h>


int main()
{
    std::cout << "Hello World!\n";
	TSensor *sensor1 = new Temp300();
	TSensor *sensor2 = new Temp300();

	HotMotor *motor1 = new HotMotor(sensor1);
	HotMotor *motor2 = new HotMotor(sensor2);

	motor1->start();
	motor2->start();

	while (true) {
		sensor1->read();
		std::cout << "sensor 1 temp: " << sensor1->temperatuur() << std::endl;
		std::cout << "motor 1 status: " << motor1->getState() << std::endl;
		Sleep(500); 
		
		sensor2->read();
		std::cout << "sensor 2 temp: " << sensor2->temperatuur() << std::endl;
		std::cout << "motor 2 status: " << motor2->getState() << std::endl;
		Sleep(500);
	}

	return 0;
}