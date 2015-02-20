//Employe class member function definitions

#include "Employee.h"

Employee::Employee(const string & theName, int theID, const string & theHireDate)
	: name(theName), id(theID), hireDate(theHireDate) //inititalize data members with passed values
{
} //end constructor

void Employee::setName(string theName)
{
	name = theName; //set name
} //end setName function

string Employee::getName() const
{
	return name; //return name
} //end getName function

void Employee::setID(int theID)
{
	id = theID; //set id
} //end setID function

int Employee::getID() const
{
	return id; //return id
} //end returnID function

void Employee::setHireDate(string theHireDate)
{
	hireDate = theHireDate; //set hireDate
} //end setHireDate function

string Employee::getHireDate() const
{
	return hireDate; //return hireDate
} ///end getHireDate function