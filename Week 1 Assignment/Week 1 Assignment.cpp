/*************************************************************************************************
Program: GPA Calculator
Programmer: Adam Holt
This program calculates a student's cumulative GPA for any number of courses
Input required: number of courses, number of students, credit hours for each course, letter grade for each course 
Output: Cummulative weighted GPA
Algorithm:
	Input total number of courses
		Input credit hours for course
			repeat until valid credit hours input
		Add current course credit hours to running total
		Input letter grade for course
			repeat until valid grade input
		Multiply grade value by current course credit hours and add to running total
		Repeat for each course
	Divide runninng GPA total by running credit hours total
	Output results
************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	const float A = 4.0, B = 3.0, C = 2.0, D = 1.0, F = 0.0; //Points for each possible grade

	int numberOfCourses;	//Total number of courses taken by a student
	int numberOfStudents;	//Total number of students
	float creditHours;		//Credit hours for each course
	float totalHours = 0.0;	//Running total of credit hours
	char letterGrade;		//Grade for each course
	float grade;			//Numeric grade for each course
	float gpa = 0.0;		//Running total of GPA
	float cummGpa;			//Cummulative weighted GPA
	int i, j;					//Counter variables

	cout << "**GPA Calculator**\n\n"
		 << "This program calculates students' GPAs\n"
		 << "based on the credit hours and grade for each course taken.\n\n";

	//Get total number of students
	cout << "\tHow many students would you like to calculate GPA for? ";
	do
	{
		cin >> numberOfStudents;
		if (numberOfStudents <= 0)
			cout << "\tPlease enter number greater than 0: ";
	} while (numberOfStudents <= 0); //end do-while loop

	//Loop for each student
	for (j = 1; j <= numberOfStudents; j++)
	{
		//Get total number of courses taken - only accepts numbers greater than 0
		cout << "\tHow many courses did student " << j << " take? ";
		do
		{
			cin >> numberOfCourses;
			if (numberOfCourses <= 0)
				cout << "\tPlease enter number greater than 0: ";
		} while (numberOfCourses <= 0); //end do-while loop
			
		//Loop for each course taken
		for (i = 1; i <= numberOfCourses; i++)
		{
			cin.ignore(10,'\n');
			cout << endl << "\tEnter the credit hours for course " << i << ": ";
			//Get number of credit hours for the course - value must be between 0.0 and 8.0
			do
			{	
				cin >> creditHours;
				if (creditHours > 8.0 || creditHours < 0.0) 
				{
					//Output error message for invalid entries
					cout << "\tCredit hours must be between 0 and 8 hours: ";
					cin.ignore('\n');
				} //end if
			}	while (creditHours > 8.0 || creditHours < 0.0); //end do-while loop
			
			//Add current course credit hours to running total
			totalHours += creditHours; 
			cout << "\tEnter the letter grade for course " << i << ": ";
	
				do
				{
				cin >> letterGrade;
				switch(letterGrade)
					{
						//For each valid entry multiply the grade value by course credit hours
						case 'A':
						case 'a': gpa += (A * creditHours);
								  break;
						case 'B':
						case 'b': gpa += (B * creditHours);
								  break;
						case 'C':
						case 'c': gpa += (C * creditHours);
								  break;
						case 'D':
						case 'd': gpa += (D * creditHours);
								  break;
						case 'F':
						case 'f': gpa += (F * creditHours);
								  break;
						//Valid entries that don't affect GPA
						case 'W':
						case 'w':
						case 'P':
						case 'p':
						case 'I':
						case 'i': //Subtract credit hours for the course for non-calculated grade
								  totalHours -= creditHours; 
								  break;
						//For invalid entries output error message and set
						//letterGrade to '0' to indicate invalid entry
						default:  cout << "\tPlease enter a valid letter grade for course " << i << ": ";
							      letterGrade = '\0';
	
					} //end switch statement

				//If grade entry was invalid repeat the loop
				} while (letterGrade == '\0'); //end do-while loop
	
		} //end inner for loop

		//Cummulative GPA is running total of GPA divided by running total of credit hours
		
		if (totalHours == 0)
			cout << "\nNo credit hours for student " << j << endl << endl;
		else
		{
		cummGpa = gpa / totalHours; 
		cout << "\nCummulative weighted GPA for student " << j << " : " << cummGpa << endl << endl;
		} //end if/else

	} //end outer for loop
	system("pause");
	return 0;
} //end main function