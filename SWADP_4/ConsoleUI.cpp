#include "ConsoleUI.h"
#include "Machine.h"
#include "Motor.h"
#include "Temp300.h"
#include <iostream>
#include <windows.h> 

using namespace std;

ConsoleUI::ConsoleUI(Machine* m) : Observer(dynamic_cast<Subject*>(m->motor1()->tsensor())) {
	dynamic_cast<Temp300*>(m->motor2()->tsensor())->insert(this);
	machines.push_back(m);
}

int ConsoleUI::Run()
{

	char key;
	cin >> key;
	switch (key) {
		case 120: case 88:
		{
			return -1;
		}
		case 109: case 77:
		{
			int machineNum;
			char newState;
			cout << "geef machinenummer" << endl;
			cin >> machineNum;
			cout << "aan of uit, A voor aan, U voor uit" << endl;
			cin >> newState;
			if (newState == 'A' || newState == 'a') {
				machines[machineNum]->run();
			}
			else if (newState == 'U' || newState == 'u') {
				machines[machineNum]->halt();
			}
		}
		default:
			return 0;
	}
}

void ConsoleUI::Draw(Machine* machine, int i)
{
	cout << "machine " << i << " is in staat " << machine->getState() << endl;
	cout << "motor 1 is in staat " << machine->motor1()->getState() << " met temperatuur " << machine->motor1()->tsensor()->temperatuur() << endl;
	cout << "motor 2 is in staat " << machine->motor2()->getState() << " met temperatuur " << machine->motor2()->tsensor()->temperatuur() << endl;
}

void ConsoleUI::update()
{
	//clear console
	std::cout << "\x1B[2J\x1B[H";

	int machineCount = 0;
	for (auto i : machines) {
		Draw(i, machineCount);
		machineCount++;
	}
	cout << "";
}

void ConsoleUI::Add(Machine* m)
{
	machines.push_back(m);
	dynamic_cast<Temp300*>(m->motor1()->tsensor())->insert(this);
	dynamic_cast<Temp300*>(m->motor2()->tsensor())->insert(this);
}

void ConsoleUI::Remove(Machine* m)
{
	auto it = std::find(machines.begin(), machines.end(), m);
	if (it != machines.end()) { machines.erase(it); }
	dynamic_cast<Temp300*>(m->motor1()->tsensor())->remove(this);
	dynamic_cast<Temp300*>(m->motor2()->tsensor())->remove(this);
}