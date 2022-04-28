#ifndef POSITIE_H
#define POSITIE_H



class Positie
{
public:
	Positie(int, int);
	int x();
	int y();
	virtual void move(int, int)=0;
private:
	int X;
	int Y;
};

#endif

