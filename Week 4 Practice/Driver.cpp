/*************************************************************************************************
Program: RationalNumber
Programmer: Adam Holt

Input required: numerator and denominator of a fraction
Output: value of fraction
Algorithm: 

Create 2 RationalNumber objects
Add the two together with += operator
Get a new value for the second fraction
Subtract the new fraction from the first one with the -= operator
Display the results

************************************************************************************************/

#include <iostream>
#include "RationalNumber.h"
using namespace std;

int main()
{
	RationalNumber fraction1(3,5); //Create fraction1 with overloaded constructor
	cout << "fraction1 created with default constructor. Initialized to ";
	fraction1.showFraction(); //Display fraction1 value
	cout << "\n\n";

	cout << "Creating fraction2 with overloaded constructor.\n\n";
	RationalNumber fraction2; //Create fraction2 with default constructor - user is asked to input the fraction

	cout << "\nfraction1 is: ";
	fraction1.showFraction(); //Display fraction1 value

	cout << "\nfraction2 is: ";
	fraction2.showFraction(); //Display fraction2 value

	cout << "\n\nPerforming the calculation fraction1 += fraction2\n\n";
	
	fraction1 += fraction2; //Add fraction2 to fraction1 with overloaded += operator
	
	cout << "fraction1 is now: ";
	fraction1.showFraction(); //Display fraction1 value

	cout << "\n\nEnter a new value for fraction2: \n";
	fraction2.inputFraction(); //Input new values for fraction2

	cout << "\nPerforming the calculation fraction1 -= fraction2\n\n";
	
	fraction1 -= fraction2; //Subtract fraction2 from fraction1 with overloaded -= operatot
	
	cout << "fraction1 is now: ";
	fraction1.showFraction(); //Display fraction1 value

	cout << endl;
	system("pause");
} //end main function