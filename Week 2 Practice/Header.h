#include <iostream>
using namespace std;

int getEmployees()
{
	int numEmployees;
	cout << "How many employees are in the company? ";
	cin >> numEmployees;

	while (numEmployees <= 0) //only accept positive values
	{
		cout << "Enter a number greater than 0: ";
		cin >> numEmployees;
	} //end while loop

	return numEmployees; //return total number of employees
} //end getEmployees function

int getDays(int employees)
{
	int numDays; //total days each employee missed
	int totalDays = 0; //total days all employees missed - initialized to 0

	for ( int i = 1; i <= employees; i++ ) //repeat for each employee
	{
		cout << "How many days did employee " << i << " miss? ";
		cin >> numDays;
			while (numDays < 0) //only accept positive values or 0
			{
				cout << "Enter a number greater than 0: ";
				cin >> numDays;
			} //end while loop
		totalDays += numDays; //add individual days missed to total
	} //end for loop

	return totalDays; //return total days missed
} //end getDays function

float getAverage(int employees, int days)
{
	return days / employees; //return average of days missed per employee
} //end getAverage function