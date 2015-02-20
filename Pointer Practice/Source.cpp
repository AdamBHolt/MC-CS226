/*************************************************************************************************
Program: Pointer Practice
Programmer: Adam Holt

Input required: 7 double stock averages into a vector
Output: values of the vector, minimum value, maximum value, vector sorted in ascending order
Algorithm: 
	Input each element of stockAvg array
	Output each element of stockAvg array
	Search for and output the maximum element in the array
	Search for and output the minimum element in the array
	Call sortArray
		Sort the array using insertion sort
	Output each element of stockAvg array

************************************************************************************************/
#include <iostream>
using namespace std;

void sortArray(double *, int); //Function prototype for sort function

int main()
{
	const int STOCKS = 7; //Number of stock averages to input
	double stockAvg[STOCKS]; //Array of stock averages
	double *stockPtr = stockAvg; //Pointer to stock average array
	double max = 0.0; //Initial search value for maximum
	double min; //Initial search value for minimum

	for(int i = 0; i < STOCKS; i++) //Input value for each element of stockAvg
	{
		cout << "Enter stock average #" << i + 1 << ": ";
		cin >> *(stockPtr + i);
	}

	cout << "\nThe stock averages listed forward are: \n";
	for(int i = 0; i < STOCKS; i++) //Output value for each element of stockAvg //End for loop
		cout << *(stockPtr + i) << endl;

	cout << "\nThe stock averages listed backward are: \n";
	for(int i = STOCKS; i > 0; i--) //Output value for each element of stockAvg - backward //End for loop
		cout << *(stockPtr + (i-1)) << endl;

	for(int i = 0; i < STOCKS; i++) //Search for the maximum value in the array using linear search
	{
		if( *(stockPtr + i) > max )
			max = *(stockPtr +i); //end if
	}
	cout << "\nThe highest stock average is: " << max << endl;

	min = max; //Set min to the largest value of the array to find the smallest

	for(int i = STOCKS - 1; i >= 0; i--) //Search for the minimum value in the array using linear search
	{
		if( *(stockPtr + (i)) < min )
			min = *(stockPtr +i); //End if
	}
	cout << "\nThe lowest stock average is: " << min << endl;
	
	sortArray(stockAvg, STOCKS); //Sort stockAvg array

	cout << "\nThe sorted stock averages are: \n";
	for(int i = 0; i < STOCKS; i++) //Output value for each element of stockAvg
		cout << *(stockPtr + i) << endl; //End for loop

	system("pause");

} //end main function

void sortArray(double * array, int size)
{
int startScan, minOffset; //Values to determine offset for each search iteration
	double minValue; //Current minimum during each iteration

	for (startScan = 0; startScan < (size - 1); startScan++) //compare each element of the array
	{
		minOffset = startScan; //set the current Minimum offset to startScan
		minValue = *(array + startScan); //set the current minimum value to the element at startScan
		for (int i = startScan + 1; i < size; i++) //Search each element in the unsorted section of the array
		{
			if (*(array + i) < minValue) //If the current element is the lower than the current minimum it is the new minimum
			{
				minValue = *(array + i);
				minOffset = i;
			} //End if
		} //End inner for loop
		*(array + minOffset) = *(array + startScan); 
		*(array + startScan) = minValue; //Replace the value at startScan with the new minimum value (if there is one)
	} //End outer for loop
} //End sortArray function