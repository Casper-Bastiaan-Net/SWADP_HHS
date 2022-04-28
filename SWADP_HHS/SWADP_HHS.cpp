#include "Positie.h"
#include "Robot.h"

int main()
{
	Positie P(5, 10);
	Robot R(&P);
	R.run();
	R.show();
	return 0;
}