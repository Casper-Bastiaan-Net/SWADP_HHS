#ifndef MOTOR_H
#define MOTOR_H

class TSensor;

class Motor {
public:
	Motor(TSensor*);
	virtual ~Motor() {};
	virtual TSensor* tsensor() { return S; };
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual bool getState() = 0;
private:
	TSensor* S;
};

#endif