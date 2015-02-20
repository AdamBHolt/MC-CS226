/*************************************************************************************************
Program: Plymorphism Practice
Programmer: Adam Holt

Input required: none
Output: data members of two objects and output from horn virtual function of each object
Algorithm: 

Create a Taxi object
Create a Truck object

Call Taxi print virtual function
Call Taxi horn virtual function

Call Truck print virtual function
Call Truck horn virtual function

************************************************************************************************/

#include "Taxi.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main()
{
	Taxi taxi("Ford", "yellow", 12.5); //create Taxi object
	Truck truck("Mack", "grey", 30.8); //create Truck object

	taxi.print(); //taxi overridden print function
	taxi.horn(); //taxi overridden horn function

	truck.print(); //truck overridden print function
	truck.horn(); //truck overridden horn function

	system("pause");
} //end main function