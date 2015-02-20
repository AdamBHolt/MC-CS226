//Member function definitions for RationalNumber class

#include <iostream>
#include <string>
#include "RationalNumber.h"
using namespace std;

RationalNumber::RationalNumber() //Default constructor
{
	inputFraction(); //Call inputFraction function
} //end default constructor

RationalNumber::RationalNumber(int num, int den) //Overloaded constructor
{
	while (den == 0) //Do not accept zero as a denominator
	{
		cout << "Please enter a non-zero denominator: ";
		cin >> den;
	} //end while
	setFraction(num, den); //Pass num and den to setFraction function
} //end overloaded constructor

RationalNumber RationalNumber::operator+=(RationalNumber frac) //Overloaded += operator
{
	int commonDen = denominator * frac.denominator; //Create a common denominator for the fractions
	int lNum = numerator * frac.denominator; //Temporary numerator of the left fraction - multiplied by original right denominator
	int rNum = frac.numerator * denominator; //Temporary numerator of the right fraction - multiplied by original left denominator

	numerator = lNum + rNum; //The new numerator of this object is the addition of the temporary numerators
	denominator = commonDen; //The new denominator of this object is the common denominator of the added fractions
	simplify(); //Call simplify

	return *this;
} //end overloaded += operator

RationalNumber RationalNumber::operator-=(RationalNumber frac) //Overloaded -= operator
{
	int commonDen = denominator * frac.denominator; //Create a common denominator for the fractions
	int lNum = numerator * frac.denominator; //Temporary numerator of the left fraction - multiplied by original right denominator
	int rNum = frac.numerator * denominator; //Temporary numerator of the right fraction - multiplied by original left denominator

	numerator = lNum - rNum; //The new numerator of this object is the difference of the temporary numerators
	denominator = commonDen; //The new denominator of this object is the common denominator of the added fractions
	simplify(); //Call simplify

	return *this;
} //end overloaded -= operator

void RationalNumber::inputFraction() //Function to get input of the fraction
{
	
	
	int num; //Input numerator
	int den; //Input denominator

	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";

	do //Validation for the denominator
	{
		cin >> den;
		if (den == 0)
			cout << "Please enter a non-zero denominator: ";
	} while (den == 0); //Repeat until a non-zero value is entered

	setFraction(num, den); //Pass num and den to setFraction function
} //end inputFraction function

void RationalNumber::setFraction(int num, int den) //Function to set the value of the fraction
{
	setNumerator(num); //Set the value of the numerator
	setDenominator(den); //Set the value of the denominator
	simplify(); //Simplify the fraction
} //end setFraction function

void RationalNumber::setNumerator(int num) //Set the numerator value
{
	numerator = num; //Set the value of the numerator
} //end setNumerator function

void RationalNumber::setDenominator(int den) //Set the denominator value
{
	 denominator = den; //Set the value of the denominator
} //end setDenominator function

void RationalNumber::showFraction() //Display the fraction
{
	cout << numerator << "/" << denominator;
} //end showFraction function

void RationalNumber::simplify() //Function to simplify the fraction
{

	int max = (numerator > denominator) ? numerator : denominator; //Set max to the greater of the numerator or denominator

	for (int i = max; i > 0; --i) //Loop starting with value of max and decrement
	{
		if (numerator % i == 0 && denominator % i == 0) //If both the numerator and denominator are divisible by i, then i is a common factor
		{
			numerator = numerator / i; //Divide numerator by i
			denominator = denominator / i; //Divide denominator by i
		} //end if
	} //end for loop

		if (numerator < 0 && denominator < 0) //If both the numerator and denominator are negative, the fraction is positive
	{
		numerator = -numerator; //Set numerator to the positive
		denominator = -denominator; //Set the denominator to the positive
	} //end if

	if (denominator < 0 && numerator > 0) //If the numerator is positive and the denominator is negative, move the sign to the numerator
	{
		numerator = -numerator; //set the numerator to the negative
		denominator = -denominator; // set the denominator to the positive
	} //end if
} //end simplify function