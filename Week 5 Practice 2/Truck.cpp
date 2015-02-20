//class Truck member function definitions

#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(string theModel, string theColor, float theFuel)
	: Vehicle(theModel, theColor, theFuel) //base class coonstructor
{
} //end constructor

void Truck::horn() //overridden honk function
{
	cout << "HOOOOOOOOONNK!!!\n\n";
} //end honk functio

void Truck::print() //overridden print function
{
	cout << "\t**This is a truck**\n";
	Vehicle::print(); //call base class print function
} //end print function