//Taxi class definition

#ifndef TAXI_H
#define TAXI_H

#include "Vehicle.h"

class Taxi : public Vehicle
{
public:
	Taxi(string, string, float); //constructor
	virtual void horn(); //overridden honk function
	virtual void print(); //overridden print function
}; //end Taxi class definition

#endif