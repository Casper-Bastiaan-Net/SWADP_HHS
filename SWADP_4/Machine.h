#ifndef MACHINE_H
#define MACHINe_h

class Mone;
class Mtwo;

class Machine {
public:
	Machine(Mone* mone, Mtwo* mtwo);
	virtual ~Machine() {};
	virtual Mone* motor1() { return mone; };
	virtual Mtwo* motor2() { return mtwo; };
	virtual bool getState() = 0;
	virtual void run() = 0;
	virtual void halt() = 0;
private:
	Mone* mone;
	Mtwo* mtwo;
};

#endif