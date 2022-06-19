#pragma once

class UserInterface
{
	virtual ~UserInterface() = 0;
	virtual int Run() = 0;
	virtual void Update() = 0;
};
