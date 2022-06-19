#include <iostream>
#include "Machine.h"
#include "Temp300.h"
#include "HotMotor.h"
#include "EF2000.h"
#include "Mone.h"
#include "Mtwo.h"
#include <windows.h>


int main()
{
	TSensor *sensor1 = new Temp300();
	TSensor *sensor2 = new Temp300();

	Motor *motor1 = new HotMotor(sensor1);
	Motor *motor2 = new HotMotor(sensor2);

	Machine *machine1 = new EF2000(dynamic_cast<HotMotor*>(motor1), dynamic_cast<HotMotor*>(motor2));

	machine1->run();

	sensor1->read();
	while (true) {
		sensor1->read();
		sensor2->read();

		//x1B[2J clears the screen, x1B[H sets the cursor to the top left
		std::cout << "\x1B[2J\x1B[H";
		std::cout << "status machine: " << machine1->getState() << std::endl;
		
		std::cout << "sensor 1 temp: " << machine1->motor1()->tsensor()->temperatuur() << std::endl;
		std::cout << "motor 1 status: " << machine1->motor1()->getState() << std::endl;

		std::cout << "sensor 2 temp: " << machine1->motor2()->tsensor()->temperatuur() << std::endl;
		std::cout << "motor 2 status: " << machine1->motor2()->getState() << std::endl;
		Sleep(500);
	}

	return 0;
}