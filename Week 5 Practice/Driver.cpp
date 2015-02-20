/*************************************************************************************************
Program: Inheritance Practice
Programmer: Adam Holt

Input required: none
Output: data members of two object, one a base class, the other derived from that class
Algorithm: 

Create an Employee object
Create an Operator object
Output the data members of the Employee object
Output the data members of the Operator object

************************************************************************************************/
#include <iostream>
#include "Employee.h"
#include "Operator.h"

int main()
{
	Employee emp1("John Doe", 1234567, "4/15/68"); //initialize object of Employee class
	Operator emp2("Jane Smith", 1111111, "1/1/09", 1, 5.09); //initialize object of Operator class 

	//Output emp1 data members
	cout << "Employee 1: (Employee bas class)\n\n"
		<< "\tName:\t\t" << emp1.getName() << endl
		<< "\tID:\t\t" << emp1.getID() << endl
		<< "\tHire Date:\t" << emp1.getHireDate() << endl << endl;

	//Output emp2 data members
	cout << "Employee 2: (Operator derived class - isa Employee)\n\n"
		<< "\tName:\t\t" << emp2.getName() << endl
		<< "\tID:\t\t" << emp2.getID() << endl
		<< "\tHire Date:\t" << emp2.getHireDate() << endl
		<< "\tShift:\t\t" << emp2.getShift() << endl
		<< "\tPay Rate:\t$" << emp2.getPay() << endl;

	system("pause");

} //end main function