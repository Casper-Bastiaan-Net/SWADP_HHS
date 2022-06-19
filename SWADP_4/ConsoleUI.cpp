#include "ConsoleUI.h"
#include "UserInterface.h"
#include "Observer.h"
#include "Machine.h"
#include <iostream>

using namespace std;

ConsoleUI::ConsoleUI() : Observer(this->S)
{

}

int ConsoleUI::Run()
{
	int key = waitKey(500);
	switch key
	case esc:
		return -1;
	case m:
		int machineNum;
		char newState;
		cout << geef machinenummer;
		cin >> machineNum;
		cout << aan of uit, A voor aan, U voor uit;
		if (newState == 'A') {
			machines[machineNum].run()
		}
		else {
			machines[machineNum].halt();
		}
	case default:
		return 0;
}

void ConsoleUI::Draw(Machine m, int i)
{
	cout << machinecount << machine.getStatus();
	cout << machine.motor1().getStatus();
	if (machine.motor1() == Hotmotor) {
		cout << machine.motor1().sensor().temperatuur()
	}
	cout << machine.motor2().getStatus();
	if (machine.motor2() == Hotmotor) {
		cout << machine.motor2().sensor().temperatuur()
	}
}

void ConsoleUI::Update()
{
	//clearConsole;
	int machineCount = 0;
	for (auto i : machines) {
		machineCount++;
		draw(i, machineCount);
	}
	cout << instructions;
}

void ConsoleUI::Add(Machine m)
{
	//machines.push(m);
	m.motor1().tsensor().insert(self);
	m.motor2().tsensor().insert(self);
}

ConsoleUI::Remove(Machine m)
{
	//machines.remove(machine);
	m.motor1().tsensor().remove(self);
	m.motor2().tsensor().remove(self);
}