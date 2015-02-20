#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);

int main()
{
	for(int counter = 0; counter <= 10; ++counter)
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;
	system("pause");
}

unsigned long factorial(unsigned long number)
{
	if ( number <= 1 )
		return 1;
	else
		return number  * factorial (number - 1);
}