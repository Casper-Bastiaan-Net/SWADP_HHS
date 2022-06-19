#include <iostream>
#include "Machine.h"
#include "Temp300.h"
#include "HotMotor.h"
#include "EF2000.h"
#include "Mone.h"
#include "Mtwo.h"
#include "ConsoleUI.h"
#include <windows.h> 


int main()
{
	TSensor *sensor1 = new Temp300();
	TSensor *sensor2 = new Temp300();

	Motor *motor1 = new HotMotor(sensor1);
	Motor *motor2 = new HotMotor(sensor2);

	Machine *machine1 = new EF2000(dynamic_cast<HotMotor*>(motor1), dynamic_cast<HotMotor*>(motor2));

	ConsoleUI *userinterface = new ConsoleUI(machine1);

	machine1->run();

	sensor1->read();
	while (true) {
		sensor1->read();
		sensor2->read();

		if (userinterface->Run() < 0) {
			return 0;
		}
	}

	return 0;
}