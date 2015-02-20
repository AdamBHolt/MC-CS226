//Employee class definition

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
	Employee(const string&, int, const string&); //Constructor
	
	void setName(string); //set name
	string getName() const; //return name

	void setID(int); //set id
	int getID() const; //return id

	void setHireDate(string); //set hireDate
	string getHireDate() const; //return hireDate

private:
	string name; //employee name
	int id; //employee id
	string hireDate; //employee hire date
}; //end Employee class definition

#endif