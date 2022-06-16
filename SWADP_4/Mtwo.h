#ifndef MTWO_H
#define MTWO_H
#include "Motor.h"

class Machine;

class Mtwo : Motor {
public:
	Mtwo(TSensor*);
	virtual ~Mtwo() {};
	virtual void setMachine(Machine* machine) { M = machine; };
	virtual Machine* machine() { return M; };
private:
	Machine* M;
};
 
#endif