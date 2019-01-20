/*Program #4- This program converts gallons to liters using floating point numbers. */


#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	
	double gallons, liters;

    cout << "Enter number of gallons:"; 
	cin >> gallons; // this inputs from the users
	
	liters = gallons * 3.7854; // convert to liters
	
	cout << "Liters:" << liters;
	
	return  0;
}


