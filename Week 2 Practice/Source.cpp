#include "Header.h"

int main()
{
	int emp;
	int day;

	emp = getEmployees();
	day = getDays(emp);

	cout << getAverage( emp, day ) << endl;
}