#include "Operator.h"

Operator::Operator(const string & theName, int theID, const string & theHireDate, int theShift, float thePay)
	: Employee( theName, theID, theHireDate) //call base class Employee constructor
{
	setShift(theShift); //set shift
	setPay(thePay); //set pay
} //end constructor

void Operator::setShift(int theShift)
{
	if (theShift < 1 || theShift > 3) //only accept 1, 2, or 3
		throw invalid_argument("Shift must be 1, 2, or 3");
	else
		shift = theShift; //set shift //end if
} //end setShift function

int Operator::getShift() const
{
	return shift; //return shift
} //end getShift function

void Operator::setPay(float thePay)
{
	if (thePay < 0)
		throw invalid_argument("Pay rate must be non-negative");
	else
		payRate = thePay; //set payRate //end if
} //end setPay function

float Operator::getPay() const
{
	return payRate; //return payRate
} //end getPay function