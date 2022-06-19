#pragma once

class UserInterface
{
public: 
	virtual ~UserInterface() {};
	virtual int Run() = 0;
	virtual void update() = 0;
};
