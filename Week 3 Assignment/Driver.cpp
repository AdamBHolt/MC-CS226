/*************************************************************************************************
Program: ASCIICode
Programmer: Adam Holt

Input required: Array size for objects created using overloaded constructor, Single character to display, Amount to increase array by
Output: Printed lists of array of each object, individual characters from each array, array size of each object, total count of objects
Algorithm: 

Create list1 ASCIICode object using default constructor
	Call testObject funtion to display information about list1
Create list2 ASCIICode object using overloaded constructor
	Call testObject funtion to display information about list2
Create list3 ASCIICode object using proxy class ASCIICodeCover default constructor
	Call testObject funtion to display information about list3
Create list4 ASCIICode object using proxy class ASCIICodeCover overloaded constructor
	Call testObject funtion to display information about list4

Display size and object count and complete list of list2
Increase the size of list2 using overloaded += operator
Display size and object count and complete list of list2

************************************************************************************************/

#include <iostream>
#include <string>
#include "ASCIICode.h"
#include "ASCIICodeCover.h"
using namespace std;

inline int getInput(int max); //Function prototype to get and validate input from the user

template<typename P>
inline void testObject(P*, string); //Function prototype to test each object using template to account for different pointer types

int main()
{
	ASCIICode *objPtr; //Pointer to ASCICode object
	ASCIICodeCover *proxyPtr; //Pointer to ASCIICodeCover proxy object

	int list2Size = 255;	//Initial default size for list2
	int list4Size = 255;	//Initial default size for list4
	int increaseList;		//Amount to increase list size
	
	ASCIICode list1; //create list1 with default constructor
	cout << "\tlist1 created - default constructor called\n\n";

	objPtr = &list1; //set objPoint to the address for list1
	testObject(objPtr, "list1"); //test list1

	cout <<"\n\nSpecify a size for list2 (between 1 and " << list2Size << "): ";
	list2Size = getInput(list2Size); //Get user input to specify size of list2

	ASCIICode list2(list2Size); //Create list2 object with overloaded constructor
	cout << "\n\n\tlist2 created with size " << list2Size << " - overloaded constructor called\n\n";

	objPtr = &list2; //set objPoint to the address for list1
	testObject(objPtr, "list2"); //test list2

	ASCIICodeCover list3;
	cout << "\n\n\tlist3 created using proxy class default constructor\n\n";

	proxyPtr = &list3; //set objPoint to the address for list1
	testObject(proxyPtr, "list3"); //test list3

	cout <<"\n\nSpecify a size for list4 (between 1 and " << list4Size << "): ";
	list4Size = getInput(list4Size); //Get user input to specify size of list2

	ASCIICodeCover list4(list4Size);
	cout << "\n\n\tlist4 created using proxy class overloaded constructor\n\n";

	proxyPtr = &list4; //set objPoint to the address for list1
	testObject(proxyPtr, "list4"); //test list4

	cout << "\n\nlist2:\n\n";
	list2.print(); //Print list2 array
	cout << "\n\nlist2 currently has ";
	list2.showSize(); //Display current size of list2
	cout << " elements.\nThere are currently ";
	list2.showCount(); //Display current object count
	cout << " instances of the ASCIICode class.\n";

	cout << "\nIncrease the size of list2 by how many elements? ";
	
	do //Data validation
	{
		cin >> increaseList;
		if (increaseList <= 0) //Only accept positive values
			cout << "\nPlease enter a positive value: "; //end if
	} while (increaseList <= 0); //end do-while
	
	list2 += increaseList; //Increase the list size by the input value

	cout << "\n\nlist2:\n\n";
	list2.print(); //Print list2 array
	cout << "\n\nlist2 now has ";
	list2.showSize(); //Display list2 size after increase
	cout << " elements.\nThere are now ";
	list2.showCount(); //Display object count after list2 size increase
	cout << " instances of the ASCIICode class.\n\n";

	system("pause");
} //end main function

inline int getInput(int max)
{
	int input; //User input value
	bool valid = false; //Flag to determine valid input
	
	do //Input validation
	{
		cin >> input;
		if (input < 1 || input > max) //Only values from 1 to the maximum size of the list are valid 
			cout << "Please enter a number from 1 to " << max << ": ";
		else
			valid = true; //If the entry isn't invladi, set the valid flag to true
	} while (valid == false); //end do-while

	return input; //Return the user input once it is valid
} //end getInput function

template<typename P>
inline void testObject(P * list, string name)
{
	int printChar; //Individual character to be printed
	int listSize = list->getSize(); //Get the size of the current list

	cout << "Printing " << name << "\n\n";

	list->print(); //Print the entire list of ASCII characters

	cout << "\nPrint which character from " << name << "? (between 1 and " << listSize << "): ";
	printChar = getInput(listSize); //Get character to be printed from list
	list->print(printChar); //Print specified character from list

	cout << "\n\n" << name << " size = ";
	list->showSize(); //Display size of list
	cout << "  Current ASCIICode object count: ";
	list->showCount(); //Display total count of ASCIICode objects

	cout << endl;
	system("pause");
} //end testObject function