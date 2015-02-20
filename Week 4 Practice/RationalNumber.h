//Class definition for RationalNumber

#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

class RationalNumber
{
public:
	RationalNumber();							//Default constructor
	RationalNumber(int, int);					//Overloaded constructor
	RationalNumber operator+=(RationalNumber);	//Overloaded += operator
	RationalNumber operator-=(RationalNumber);	//Overloaded -= operator
	void inputFraction();						//Function to input the fraction
	void showFraction();						//Display the fraction
	void simplify();							//Simplify the fraction
private:
	void setFraction(int, int);					//Set the value of the fraction
	void setNumerator(int);						//Set the value of the numerator
	void setDenominator(int);					//Set the value of the denominator
	int numerator;								//numerator of the fraction
	int denominator;							//denominator of the fraction
}; //end class definition

#endif