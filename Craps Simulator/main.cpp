#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
using namespace std;

int rollDice();

int main()
{

	srand(time(0));
	enum Status { CONTINUE, WON, LOST };

	int myPoint;
	Status gameStatus;

	int sumOfDice = rollDice();

	switch ( sumOfDice )
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default :
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is: " << myPoint << endl;
		break;
	}

	while ( gameStatus == CONTINUE )
	{
		sumOfDice = rollDice();

		if ( sumOfDice == myPoint )
			gameStatus = WON;
		else
			if ( sumOfDice == 7 )
				gameStatus = LOST;
	}

	if ( gameStatus == WON )
		cout << "Player Wins!" <<endl;
	else
		cout << "Player Loses." << endl;

	system("pause");
}

int rollDice()
{
	Die die1(6);
	Die die2(6);

	int roll1 = die1.rollDie();
	int roll2 = die2.rollDie();

	int sum = roll1 + roll2;

	cout << "Player rolled " << roll1 << " + " << roll2
		<< " = " << sum << endl;
	return sum;
}