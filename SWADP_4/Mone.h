#ifndef MONE_H
#define MONE_H
#include "Motor.h"

class Machine;

class Mone : Motor {
public:
	Mone(TSensor*);
	virtual ~Mone() {};
	virtual void setMachine(Machine* machine) { M = machine; };
	virtual Machine* machine() { return M; };
private:
	Machine* M;
};

#endif