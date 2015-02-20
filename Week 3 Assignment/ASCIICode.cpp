//Member function definitions for ASCIICode class

#include <iostream>
#include <iomanip>
#include "ASCIICode.h"
using namespace std;

int ASCIICode::count = 0; //Static int to track number of objects of this class

ASCIICode::ASCIICode() //Default constructor
{
	count++; //Increment object counter

	//Initialize the array to have 255 characters if no value is supplied
	const int SIZE = 255; 
	initialize(SIZE); //Initialize the array
} //end default constructor

ASCIICode::ASCIICode(int arraySize) //Constructor that takes an int to determine length of ASCII list
{
	count++; //Increment object counter
	initialize(arraySize); //Initialize the array
} //end overloaded constructor

ASCIICode::~ASCIICode() //Destructor
{
	delete ascii; //Delete the array
} //end destructor

ASCIICode &ASCIICode::operator+=(int sizeIncrease)
{
	size += sizeIncrease; //Increase the size of the array by the passed value
	delete ascii; //Delete the existing array
	initialize(size); //Create a new array with the updated size and reinitialize
	return *this;
}//end operator+= overload

void ASCIICode::initialize( int arraySize) //Set length of ASCII character list and populate array with ASCII characters
{
	//Set member size to arraySize
	size = arraySize;
		
		while (size <= 0) //Do not accept negative values
		{
			cout << "\n\nNegative values are not allowed.\nPlease enter a positive number: ";
			cin >> size; //Request a new number until the value is positive
		} //end if

	//Create a new array with a length of size
	ascii = new char[size];

	//Set each element in the ascii array to the corresponding ASCII character
	for (int i = 0; i < size; ++i)
		*(ascii + i) = i; //end for
} //end initialize function

void ASCIICode::print() //Print all elements in the list of ASCII characters
{
	//Print each character in the ascii array
	for (int i = 0; i < size; ++i)
	{
		print(i + 1); //Call the overloaded print function at the current element
	if (i % 8 == 0) //start a new line every 5 elements
		cout << endl; //end if
	} //end for
	cout << endl;
} //end print function

void ASCIICode::print(int element) //Print single element from the list of the ASCII array at the passed subscript
{
	cout << setw(3) << element << ": " << *(ascii + (element-1)) << "   "; //Print the element of the ascii array at the passed value - 1
} //end overloaded print function

void ASCIICode::showSize() //Display size variable
{
	cout << size; 
} //end showSize function

void ASCIICode::showCount() //Display count static variable for the class
{
	cout << count; 
} //end showcount function

int ASCIICode::getSize() //Return the size of the list of ASCII characters
{
	return size;
} //end getSize function