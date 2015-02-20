#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
using namespace std;

Die::Die(int sides)
{
	setSides(sides);
}

Die::Die()
{
	setSides();
}

int Die::rollDie()
{
	srand(time(0));

	theRoll = 1 + rand() % numOfSides;

	return theRoll;
}

int Die::getRoll()
{
	return theRoll;
}

void Die::setSides(int sides)
{
	if (sides > 0)
		numOfSides = sides;
	else
		numOfSides = 6;
}

void Die::setSides()
{
	numOfSides = 6;
}