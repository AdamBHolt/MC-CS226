//Member function definitions for proxy class to ASCIICode

#include "ASCIICodeCover.h"
#include "ASCIICode.h"

ASCIICodeCover::ASCIICodeCover() //Default constructor
	: ptr (new ASCIICode()) //Create a pointer to ASCIICode class using default constructor
{
} //end default constructor

ASCIICodeCover::ASCIICodeCover(int x) //Constructor that takes an int to determine length of ASCII list
	: ptr (new ASCIICode(x)) //Create a pointer to ASCIICose class using overloaded constructor
{
}//end constructor

ASCIICodeCover::~ASCIICodeCover() //Destructor for proxy class
{
	delete ptr; //delete the ptr to ASCIICode class
}//end destructor

void ASCIICodeCover::initialize(int x) //Set length of ASCII character list
{
	ptr->initialize(x);
}//end initialize function

void ASCIICodeCover::print() //Default print function - outputs entire list of ASCII characters
{
	ptr->print();
}//end print function

void ASCIICodeCover::print(int x) //Overloaded print function - outputs specified ASCII character
{
	ptr->print(x);
}//end print function

void ASCIICodeCover::showSize() //Display length of the list of ASCII characters
{
	ptr->showSize();
}//end showSize function

void ASCIICodeCover::showCount() //Display the current number of objects of this class
{
	ptr->showCount();
}//end showcount function

int ASCIICodeCover::getSize() //Return the size of the list of ASCII characters
{
	return ptr->getSize();
}//end getSize function