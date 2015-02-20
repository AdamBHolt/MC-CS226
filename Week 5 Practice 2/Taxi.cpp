//class Taxi member function definitions

#include "Taxi.h"
#include <iostream>
using namespace std;

Taxi::Taxi(string theModel, string theColor, float theFuel)
	: Vehicle(theModel, theColor, theFuel) //base class coonstructor
{
} //end constructor

void Taxi::horn() //overridden honk function
{
	cout << "Beep! Beep!\n\n";
} //end honk functio

void Taxi::print() //overridden print function
{
	cout << "\t**This is a taxi**\n";
	Vehicle::print(); //call base class print function
} //end print function