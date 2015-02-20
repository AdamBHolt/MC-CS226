/*************************************************************************************************
Program: Temperature Converter & Math Calculator
Programmer: Adam Holt

Input required: char Menu choices, double temperatures to convert, numbers to compare, int to find factorial
Output: Temperature conversion, number manipulation, or factorial
Algorithm: 
Display main menu
	If user chooses Temperature Conversion display Temperature conversion menu
		convert temperature or display conversion chart depending on user choice
		repeat until user chooses to return to main menu

	If user chooses Math Calculator display Math Calculator menu
		display mathematical functions or factorial of user supplied numbers
		repeat until user chooses to return to main menu

	If user chooses Quit exit program
Repeat until user quits

************************************************************************************************/
#include <iostream>
#include "prototypes.h"
using namespace std;

int main()
{
	char choice; //user input for switch statement

	while(true) //Repeat until user chooses to quit
	{	
		mainMenu(); //Call function to generate main menu options
		while(choice = cin.get())
		{
			switch(choice)
			{
			case '1':
				TemperatureConversion(); //Call TemperatureConversion menu
				cin.ignore(1,'\n');
				mainMenu(); //Call function to generate main menu options
				break;
			case '2':
				MathCalculator(); //Call MathCalculator menu
				cin.ignore(1,'\n');
				mainMenu(); //Call function to generate main menu options
				break;
			case '3':
				return 0; //exit program
				break;
			default:
				cout << "Please make a valid choice." << endl;
				cin.ignore(1,'\n');
				mainMenu(); //Call function to generate main menu options
				break;
			} //end switch
		} //end inner while loop
	} //end outer while loop
} //end main function