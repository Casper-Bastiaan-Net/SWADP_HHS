#pragma once
#include "UserInterface.h"
#include "Observer.h"
#include <vector>

class Machine;
class Subject;

class ConsoleUI : public Observer, public UserInterface
{
public:
	ConsoleUI(Machine* machine);
	virtual ~ConsoleUI() {};
	virtual int Run();
	virtual void Draw(Machine*, int);
	virtual void update();
	virtual void Add(Machine*);
	virtual void Remove(Machine*);
private:
	std::vector<Machine*>machines;
};
