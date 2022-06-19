#pragma once
#include "UserInterface.h"

class Machine;
class Observer;
class Subject;

class ConsoleUI : public Observer, public UserInterface
{
public:
	Subject* S = nullptr;

	virtual int Run();
	virtual void Draw(Machine, int);
	virtual void Update();
	virtual void Add(Machine);
	virtual void Remove(Machine);
};
