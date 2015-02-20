//Vehicle abstract class definition

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
public:
	Vehicle(string, string, float); //constructor

	virtual void horn() = 0; //pure virtual function honk
	virtual void print(); //virtual function print

	void setModel(string); //set model
	string getModel() const; //return model

	void setColor(string); //set color
	string getColor() const; //return color

	void setFuel(float); //set fuel level
	float getFuel() const; //return fuel level

private:
	string model; //vehicle model
	string color; //vehicle color
	float fuel; //vehicle fuel level

}; //end Vehicle abstract class definition

#endif