/*************************************************************************************************
Program: Name and Numbers
Programmer: Adam Holt
This program repeatedly asks for the users first name and two integers until the user enters 'q' or 'Q'
Input required: User's name, two integers
Output: relative size of the integers, Sum of the integers, whether each integer is odd or even
Algorithm: 
	Ask user to input name and two integers
	compare the integers to see which is larger or if they are equal
	calculate the sum of the integers
	determine whether each integer is odd or even
	repeat unless the user enters now values

************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string firstName;		//User's first name
	int numOne, numTwo;		//Two integers to be compared and manipulated
			
	do //Repeat until the user enters 'q' or 'Q'
	{
		cout << "What is your first name? (enter 'Q' to quit) ";
		cin >> firstName;

		cin.ignore();
		if (firstName != "q" && firstName != "Q")
		{
			cout << "Thanks, " << firstName << " now enter two integers separated by a space: ";
			cin >> numOne >> numTwo;
		
			//Compare the integers and output whether numOne is greater or less than numTwo or if they are equal
			if (numOne > numTwo)
				cout << endl << firstName << ", " << numOne << " is greater than " << numTwo << endl;
			else if (numOne < numTwo)
				cout << endl << firstName << ", " << numOne << " is less than " << numTwo << endl;
			else
				cout << endl << firstName << ", your numbers are equal to each other." << endl;
			//end if
		
			//Output the sum of the two integers
			cout << "The sum of " << numOne << " and " << numTwo << " is " << numOne + numTwo << endl;
		
			//if numOne % 2 is not 0 then the integer is odd
			if (numOne % 2)
				cout << numOne << " is odd. ";
			else if (numOne == 0)
				cout << numOne << " is zero. ";
			else
				cout << numOne << " is even. ";
			//end if
		
			//if numTwo % 2 is not 0 then the integer is odd
			if (numTwo % 2)
				cout << numTwo << " is odd.\n\n";
			else if (numTwo == 0)
				cout << numTwo << " is zero.\n\n";
			else
				cout << numTwo << " is even.\n\n";
			//end if

		} //end if
		//cin.ignore();
	} while (firstName != "q" && firstName != "Q"); //end do while loop - exit if firstName is 'q' or 'Q'

	system("pause");
	return 0;
} //end main function