//Class definition for ASCIICode

#ifndef ASCIICODE_H
#define ASCIICODE_H

class ASCIICode
{
public:
	ASCIICode();			//Default constructor
	ASCIICode(int);			//Overloaded constructor
	~ASCIICode();			//Destructor
	ASCIICode &operator+=(int);
	void initialize(int);	//Set the size of the array
	void print();			//Print all elements of the array
	void print(int);		//Print one element of the array
	void showSize();		//Display the size of the array
	void showCount();		//Display number of objects of this class
	int getSize();			//Return size of the array

private:
	int size;				//Size of the array
	static int count;		//Total number of objects of this class
	char *ascii;			//Pointer to character array
};

#endif