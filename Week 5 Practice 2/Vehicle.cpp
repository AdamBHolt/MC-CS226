//Abstract class Vehicle member function definitions

#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string theModel, string theColor, float theFuel)
	: model(theModel), color(theColor), fuel(theFuel) //object initialization
{
} //end constructor

void Vehicle::print()
{
	cout << "This vehicle is a " << getColor() << " " << getModel()
		<< "\nWith a fuel level of: " << getFuel() << " gallons\n\n";
} //end print function

void Vehicle::setModel(string theModel)
{
	model = theModel;
} //end setModel function

string Vehicle::getModel() const
{
	return model; //return model
} //end getModel function

void Vehicle::setColor(string theColor)
{
	color = theColor; //set color
} //end setColor function

string Vehicle::getColor() const
{
	return color; //get color
} //end getColor function

void Vehicle::setFuel(float theFuel)
{
	if (theFuel < 0) //Only allow non-negative fuel level
		throw invalid_argument("Fuel must be non-negative.");
	else
		fuel = theFuel; //set fuel //end if
} //end setFuel function

float Vehicle::getFuel() const
{
	return fuel; //return fuel
} //end getFuel function