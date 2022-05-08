#ifndef POSITIE_H
#define POSITIE_H



class Positie
{
public:
	Positie(int, int);
	virtual ~Positie();
	virtual int x();
	virtual int y();
	virtual void move(int, int);
private:
	int X;
	int Y;
};

#endif

