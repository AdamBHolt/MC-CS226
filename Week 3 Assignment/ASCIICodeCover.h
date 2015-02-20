//Proxy class for ASCIICode

#ifndef ASCIICODECOVER_H
#define ASCIICODECOVER_H

class ASCIICode; //Forward ASCIICode

class ASCIICodeCover
{
public:
	ASCIICodeCover();		//Default constructor
	ASCIICodeCover(int);	//Overloaded constructor
	~ASCIICodeCover();		//Destructor
	void initialize(int);	//Set the size of the array
	void print();			//Print all elements of the array
	void print(int);		//Print one element of the array
	void showSize();		//Display the size of the array
	void showCount();		//Display number of objects of this class
	int getSize();			//Return size of the array
private:
	ASCIICode *ptr; //Pointer to ASCIICode object
};

#endif