#include <iostream>
#include <iomanip>
#include "prototypes.h" //Function prototype header file
using namespace std;

//Function to generate main menu
void mainMenu()
{
	cout << "\nPlease choose from the following options:\n\n";
	cout << "\t1) Temperature Conversion\n"
			"\t2) Math Calculator\n"
			"\t3) Quit\n";
} //end mainMenu function

void TemperatureConversion()
{	
	while(true)	//repeat until user chooses to quit
	{
		cout << "Select an operation:\n\n";
		cout << "\t1) Convert Fahrenheit to Celsius\n"
				"\t2) Convert Celsius to Fahrenheit\n"
				"\t3) Print conversion chart of Fahrenheit and Celsius\n"
				"\t4) Return\n";

		cin.ignore(1,'\n');
		switch(cin.get())
		{
		case '1':
			tempConvert('f'); //call tempConvert with F to C flag
			break;
		case '2':
			tempConvert('c'); //call tempConvert with C to F flag
			break;
		case '3':
			tempConvert(); //call overloaded tempconvert function with no arguments
			break;
		case '4':
			return; //exit function
		default:
			cout << "Please make a valid choice." << endl;
			
			break;
		} //end switch
	} //end while
} //end Temperatureconversion function

void MathCalculator()
{
	unsigned long fNumber; //number to be passed to factorial function
	double number1, number2; //numbers to be passed to calculator function

	while(true)	//repeat until user chooses to quit
	{
		cout << "Select an operation:\n\n";
		cout << "\t1) Get sum, difference, product, and quotient\n"
				"\t2) Calculate factorial\n"
				"\t3) Return\n";

		cin.ignore(1,'\n');
		switch(cin.get())
		{
		case '1':
			cout << "Please enter two numbers: ";
			cin >> number1;
			cin >> number2;
			calculator(number1, number2); //call calculator function
			break;
		case '2':
			cout << "Enter a number: ";
			cin >> fNumber;
			cout << fNumber << "! = " << factorial(fNumber) << "\n\n"; //call factorial function and display the output
			break;
		case '3':
			return; //exit function
		default:
			cout << "Please make a valid choice." << endl;
			break;
		} //end switch
	} //end while
} //end MathCalculator function

void tempConvert (char option)
{
	double temp; //temperature to be converted

	cout << "Enter a temperature to convert: ";
	cin >> temp;
	cout << fixed << setprecision(2); //set output prescision

	if (option == 'f') //if F to C flag was passed
	{
		cout << '\n' << temp << " degrees F = " << (temp - 32) / 1.8 << " degrees C\n" << endl;
	} //end if
	else if (option == 'c') //if C to F flag was passed
	{
		cout << '\n' << temp << " degrees C = " << (temp * 1.8) + 32 << " degrees F\n" << endl;
	} //end else-if
	return;
} //end tempconvert function

//overloaded tempconvertFunction - takes no parameters
void tempConvert()
{
	cout << "\nF to C conversion chart:\n\n";
		//Displays F tempertures converted to C from -30 to 100 in increments of 10 degrees
		for (int i = -30; i <= 100; i += 10)
			cout << '\t' << setw(4) << i << " F = " << setw(4) << fixed << setprecision(2) << (i - 32) / 1.8 << " C\n";
	cout << endl;
} //end tempConvert function

template <typename T>
void calculator(T number1, T number2)
{
	//Display results of various calculations on the passed number
	cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
	cout << number1 << " - " << number2 << " = " << number1 - number2 << endl; 
	cout << number1 << " * " << number2 << " = " << number1 * number2 << endl; 
	cout << number1 << " / " << number2 << " = " << number1 / number2 << endl << endl; 
} //end calculator function

unsigned long factorial(unsigned long number)
{
	if (number <= 1)
		return 1;
	else
		return number * factorial (number - 1); //call factorial function until number == 1
} //end factorial function