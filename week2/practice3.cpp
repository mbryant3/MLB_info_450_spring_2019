/* practice3.cpp :  Write a program that continually accepts a year value from a user and determines if it is a leap year.
The year can be evenly divided by 4
If the year can be divided by 100 it is NOT a leap year, unless
The year is also evenly divisible by 400, then it is a leap year.
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Welcome to the Leap year finder! follow the the next line of instructions " << endl;
	cout << "please enter in a year" << "\n" << endl; // user enters in value 
	cin >> year;
	// Leap year conditions
	if (year % 4 == 0)//Condition 1 -determines if the year is divisible by 4
	{
		if (year % 100 == 0)//Condition 2- determines if the year can be divisible by 100
		{
			if (year % 400 == 0)//Condition 3-  determines if the year is divisible by 400
				cout << year << " is a leap year" << "\n" << endl; // displays if condition 3 is true
			else
				cout << year << " is NOT a leap year" << endl;// displays if condition 3is untrue
		}
		else
			cout << year << " is a leap year" << endl; // displays if condition 2 is true
	}
	else
		cout << year << " is Not a leap year" << endl;// display if year isnt divisible by 4
	return 0;
}
		
		
	


