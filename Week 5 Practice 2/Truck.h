//Truck class definition

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
public:
	Truck(string, string, float); //constructor
	virtual void horn(); //overridden honk function
	virtual void print(); //overridden print function
}; //end Truck class definition

#endif