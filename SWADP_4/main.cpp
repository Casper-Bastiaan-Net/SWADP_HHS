#include <iostream>
#include "Machine.h"
#include "Temp300.h"
#include <windows.h>


int main()
{
    std::cout << "Hello World!\n";
	TSensor *sensor1 = new Temp300();
	TSensor *sensor2 = new Temp300();

	while (true) {
		sensor1->read();
		std::cout << "sensor 1 temp: " << dynamic_cast<Temp300*>(sensor1)->temperatuur() << std::endl;
		Sleep(500); 
		
		sensor2->read();
		std::cout << "sensor 2 temp: " << dynamic_cast<Temp300*>(sensor2)->temperatuur() << std::endl;
		Sleep(500);
	}

	return 0;
}