//Operator class definition

#ifndef OPERATOR_H
#define OPERATOR_H

#include "Employee.h"

class Operator : public Employee //class inherits Employee class
{
public:
	Operator(const string&, int, const string&, int, float); //constructor
	
	void setShift(int); //set shift
	int getShift() const; //return shift
	
	void setPay(float); //sat payRate
	float getPay() const; //return payRate

private:
	int shift; //shift worked
	float payRate; //employee pay rate
};// end Operator class definition

#endif