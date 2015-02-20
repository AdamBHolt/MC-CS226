#include <iostream>
using namespace std;

class Die
{
public:
	Die(int);
	Die();
	int rollDie();
	int getRoll();
	void setSides(int);
	void setSides();
private:
	int theRoll;
	int numOfSides;
};